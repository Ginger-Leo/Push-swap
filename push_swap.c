/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lstorey <lstorey@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 10:25:03 by lstorey           #+#    #+#             */
/*   Updated: 2024/03/21 09:04:04 by lstorey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	int			i;
	char		**array;
	t_ps_list	*stack_a;
	t_ps_list	*stack_b;
	int			split_flag;

	i = -1;
	stack_a = NULL;
	stack_b = NULL;
	array = &argv[1];
	if (argc == 2)
	{
		array = ft_split(argv[1], ' ');
		split_flag = 1;
	}
	error_check(array, split_flag);
	while (array[++i])
		add_to_stack(&stack_a, new_node(ft_atol(array[i])));
	if (sorted(&stack_a) == 0)
		return (1);
	if (argc == 2)
		free_split(array);
	print_stack(&stack_a);
	free_stack(stack_a);
}

//adding value to new node
t_ps_list	*new_node(int value)
{
	t_ps_list	*new_node;

	new_node = malloc(sizeof(t_ps_list));
	if (new_node == NULL)
		return (NULL);
	new_node->number = value;
	new_node->next = NULL;
	return (new_node);
}

//adding un-verifyied node to stack. 
void	add_to_stack(t_ps_list **stack_a, t_ps_list *new_node)
{
	t_ps_list	*tmp;

	if (*stack_a == NULL)
		*stack_a = new_node;
	else
	{
		tmp = *stack_a;
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = new_node;
	}
}
