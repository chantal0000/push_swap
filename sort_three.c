/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbuerge <chbuerge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 11:07:01 by chbuerge          #+#    #+#             */
/*   Updated: 2023/12/06 10:31:29 by chbuerge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

//ra rotate a so the first element goes to the bottom
// if the second node is the biggest
//rra move the bottom one to the top so the middle node is at bottom
// if the first node is bigger than the second
//sa, swap the first two elements of the list
//printf("sort_three function is running\n");

void	sort_three(t_stack **a)
{
	t_stack	*largest_node;

	largest_node = largest_element(*a);
	if (largest_node == *a)
		ra(a);
	else if ((*a)->next == largest_node)
		rra(a);
	if ((*a)->value > (*a)->next->value)
		sa(a);
}
