/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbuerge <chbuerge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 09:41:17 by chbuerge          #+#    #+#             */
/*   Updated: 2023/12/06 10:14:25 by chbuerge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_input(char **argv)
{
	check_if_int(argv);
	check_for_dup(argv);
}

//check if all argument values are integer
int	check_if_int(char **arg)
{
	int	i;
	int	j;

	j = 0;
	while (arg[j])
	{
		i = 0;
		if ((arg[j][i] == '-' && arg[j][i + 1])
			|| (arg[j][i] == '+' && arg[j][i + 1]))
			i++;
		while (arg[j][i])
		{
			if (arg[j][i] < '0' || arg[j][i] > '9')
				handle_error();
			i++;
		}
		if (ft_atolong(arg[j]) < INT_MIN || ft_atolong(arg[j]) > INT_MAX)
			handle_error();
		j++;
	}
	return (0);
}

//check for duplicates within the argument values
int	check_for_dup(char **arg)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	while (arg[i])
	{
		j = 0;
		len = 0;
		while (arg[j])
		{
			if (ft_strlen(arg[i]) >= ft_strlen(arg[j]))
				len = ft_strlen(arg[i]);
			else if (ft_strlen(arg[i]) < ft_strlen(arg[j]))
				len = ft_strlen(arg[j]);
			if (i != j && ft_strncmp(arg[i], arg[j], len) == 0)
				handle_error();
			else
				j++;
		}
		i++;
	}
	return (0);
}

// check if sorted of a linked list
int	check_if_sorted_list(t_stack *stack)
{
	if (!stack)
		return (1);
	while (stack->next)
	{
		if (stack->value > stack->next->value)
			return (2);
		stack = stack->next;
	}
	return (0);
}
