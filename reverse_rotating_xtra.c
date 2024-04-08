/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotating_xtra.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lstorey <lstorey@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 16:29:34 by lstorey           #+#    #+#             */
/*   Updated: 2024/03/29 17:28:41 by lstorey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_ps_list	*find_last_node(t_ps_list *stack)
{
	while (stack->next)
	{
		stack = stack->next;
	}
	return (stack);
}

t_ps_list	*find_penultimate_node(t_ps_list *stack)
{
	while (stack->next->next)
	{
		stack = stack->next;
	}
	return (stack);
}
