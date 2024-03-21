/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotating.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lstorey <lstorey@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 09:54:40 by lstorey           #+#    #+#             */
/*   Updated: 2024/03/20 09:45:50 by lstorey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

		/* ************************************************************* */
		/*	ra - rotate stack A. shift up all elements by one			 */
		/*	rb - rotate stack B. shift up all elements by one			 */
		/*	rr - rotate stack A + B. shift up all elements by one 		 */
		/* ************************************************************* */

#include "push_swap.h"

static t_ps_list	*find_last_node(t_ps_list *stack)
{
	while (stack->next)
	{
		stack = stack->next;
	}
	return (stack);
}

static void	rotate(t_ps_list **stack)
{
	t_ps_list	*top_node;
	t_ps_list	*bottom_node;
	t_ps_list	*second_node;

	top_node = *stack;
	bottom_node = find_last_node(*stack);
	second_node = (*stack)->next;
	bottom_node->next = top_node;
	top_node->next = NULL;
	*stack = second_node;
}

void	ra(t_ps_list **stack_a)
{
	rotate(stack_a);
	ft_printf("ra\n");
}

void	rb(t_ps_list **stack_b)
{
	rotate(stack_b);
	ft_printf("rb\n");
}

void	rr(t_ps_list **stack_a, t_ps_list **stack_b)
{
	rotate(stack_a);
	rotate(stack_b);
	ft_printf("rr\n");
}
