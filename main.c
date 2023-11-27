/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbuerge <chbuerge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 09:14:50 by chbuerge          #+#    #+#             */
/*   Updated: 2023/11/27 11:27:24 by chbuerge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	handle_error()
{
	write(2, "Error\n", 6);
	exit(1);
}

int	main(int argc, char **argv)
{
	int		i;
	t_stack	*a;
	t_stack *b;
	int value;

	a = NULL;
	b = NULL;
	i = 1;
	value = 0;
	/*
	if (argc < 2)
		handle_error();
	// what if its == 2??? string...
	// problem with this??
	// if (argc == 2)
		// argv = ft_split(argv[1], ' ');
		while (argv[i])
		{
			is_int(argv[i]);
			i++;
		}
		check_for_dup(argv);
		// meaning its not sorted, then we do what?
		if (is_sorted(argv) == 1)
		{
		// init stack a
		// +1 to start from the second element of the command line argument
		//init_stack_a(&a, argv + 1);
			i = 1;

			// how does this work?
			//if (argc == 2)
			//	argv = ft_split(argv[1], ' ');
			*/
			while(i < argc)
			{
				value = ft_atoi(argv[i]);
				// initilizes stack a
				insert_end(&a, value);
				i++;
			}
			//rotate(&a);
			if (stack_len(a) == 2)
				sa(&a);
			else if (stack_len(a) == 3)
				sort_three(&a);
			else
				sort_stacks(&a, &b);
			//push(&a,&b);
			//pb(&a, &b);
			//push(&a,&b);
			display(a);
			//printf("hi\n");
			//printf("stack b value: %d\n", b->value);
			//pb(&a, &b);
			//display(a);
			//printf("stack b value after [0]: %d\n", b->value);
			//printf("stack b value after [1]: %d\n", b->next->value);
			//display(b);
			// delete later
			//t_stack *largest_node = largest_element(a);
			//printf("largest element: %d\n", largest_node->value);
			//t_stack *smallest_node = smallest_element(a);
			//printf("smallest element: %d\n", smallest_node->value);

		//}
	// free_stack
	return (0);
}
