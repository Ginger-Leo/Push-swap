/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swapping.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lstorey <lstorey@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 13:21:53 by lstorey           #+#    #+#             */
/*   Updated: 2024/03/20 09:16:20 by lstorey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

			/* ***************************************** */
			/*	sa - swapping top 2 nodes of A			 */
			/*	sb - swapping top 2 nodes of B			 */
			/*	ss - swapping top 2 nodes of A + B 		 */
			/* ***************************************** */
#include "push_swap.h"


static void	swap(t_ps_list **stack)
{
	t_ps_list	*tmp;
	t_ps_list	*pos_2;

	tmp = (*stack)->next->next;
	pos_2 = (*stack)->next;
	pos_2->next = (*stack);
	(*stack)->next = tmp;
	(*stack) = pos_2;
}

void	sa(t_ps_list **stack_a)
{
	swap(stack_a);
	ft_printf("sa\n");
}

void	sb(t_ps_list **stack_b)
{
	swap(stack_b);
	ft_printf("sb\n");
}

void	ss(t_ps_list **stack_a, t_ps_list **stack_b)
{
	swap(stack_a);
	swap(stack_b);
	ft_printf("ss\n");
}
