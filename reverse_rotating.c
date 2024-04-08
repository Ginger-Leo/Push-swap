/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotating.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lstorey <lstorey@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 11:28:31 by lstorey           #+#    #+#             */
/*   Updated: 2024/03/29 17:28:54 by lstorey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	/* ***************************************************************** */
	/*	rra - reverse rotate stack A. shift down all elements by one	 */
	/*	rrb - reverse rotate stack B. shift down all elements by one	 */
	/*	rrr - reverse rotate stack A + B. shift down all elements by one */
	/* ***************************************************************** */

#include "push_swap.h"

void	reverse_rotate(t_ps_list **stack)
{
	t_ps_list	*top_node;
	t_ps_list	*bottom_node;
	t_ps_list	*penultimate_node;

	top_node = *stack;
	bottom_node = find_last_node(*stack);
	penultimate_node = find_penultimate_node(*stack);
	bottom_node->next = top_node;
	penultimate_node->next = NULL;
	*stack = bottom_node ;
}

void	rra(t_ps_list **stack_a)
{
	reverse_rotate(stack_a);
	ft_printf("rra\n");
}

void	rrb(t_ps_list **stack_b)
{
	reverse_rotate(stack_b);
	ft_printf("rrb\n");
}

void	rrr(t_ps_list **stack_a, t_ps_list **stack_b)
{
	reverse_rotate(stack_a);
	reverse_rotate(stack_b);
	ft_printf("rrr\n");
}
