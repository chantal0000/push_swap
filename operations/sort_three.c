/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbuerge <chbuerge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 11:07:01 by chbuerge          #+#    #+#             */
/*   Updated: 2023/11/25 14:57:51 by chbuerge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_three(t_stack **a)
{
	t_stack	*largest_node;

	largest_node = largest_element(*a);
	if (largest_node == *a)
		//ra rotate a so the first element goes to the bottom
		ra(a);
	// if the second node is the biggest
	else if ((*a)->next == largest_node)
		//rra move the bottom one to the top so the middle node is at bottom
		rra(a);
	// if the first node is bigger than the second
	if ((*a)->value > (*a)->next->value)
		//sa, swap the first two elements of the list
		sa(a);
	//printf("sort_three function is running\n");
}
