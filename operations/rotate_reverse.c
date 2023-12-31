/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_reverse.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbuerge <chbuerge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 18:57:55 by chbuerge          #+#    #+#             */
/*   Updated: 2023/12/03 14:09:59 by chbuerge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// find the last node in the list
	// next of the second last node = NULL, will be new last
	// next will be the current top
	// final_node will be on top so prev is NULL
	// final_node is assigned to the top of the list
	// next of final_node is now the former top node, its prev
	// should point to the new top node/ final_node

void	reverse_rotate(t_stack **head)
{
	t_stack	*final_node;

	if (!*head || !(*head)->next)
		return ;
	final_node = last_node(*head);
	final_node->prev->next = NULL;
	final_node->next = *head;
	final_node->prev = NULL;
	*head = final_node;
	final_node->next->prev = final_node;
}

void	rra(t_stack **a)
{
	reverse_rotate(a);
	write(1, "rra\n", 4);
}

void	rrb(t_stack **b)
{
	reverse_rotate(b);
	write(1, "rrb\n", 4);
}

void	rrr(t_stack **a, t_stack **b)
{
	reverse_rotate(a);
	reverse_rotate(b);
	write(1, "rrr\n", 4);
}
