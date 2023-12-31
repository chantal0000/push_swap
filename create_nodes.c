/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_nodes.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbuerge <chbuerge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 12:55:03 by chbuerge          #+#    #+#             */
/*   Updated: 2023/12/06 18:31:56 by chbuerge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// creating a new node
t_stack	*create_node(int value)
{
	t_stack	*new_node;

	new_node = malloc(sizeof (t_stack));
	if (!new_node)
		return (NULL);
	new_node->value = value;
	new_node->prev = NULL;
	new_node->next = NULL;
	new_node->target_node = NULL;
	new_node->operations_cost = 0;
	new_node->above_median = false;
	new_node->cheapest = false;
	return (new_node);
}

// insert at the end of the list
void	insert_end(t_stack **head, int value)
{
	t_stack	*new_node;
	t_stack	*temp;

	new_node = create_node(value);
	temp = *head;
	if (*head == NULL)
	{
		*head = new_node;
		return ;
	}
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new_node;
	new_node->prev = temp;
}

// display doubly linked list
/*
void	display(t_stack *head)
{
	t_stack *current = head;
	while(current!= NULL)
	{
		printf("%d ", current->value);
		current = current->next;
	}
	printf("\n");
}*/
/*
int main(int argc, char **argv)
{
	t_stack *head = NULL;
	int i;
	int value;

	i = 1;
	value = 0;
	while(i < argc)
	{
		value = atoi(argv[i]);
		insert_end(&head, value);
		i++;
	}
	display(head);
	return (0);
}*/
