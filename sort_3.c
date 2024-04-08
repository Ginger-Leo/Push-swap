/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lstorey <lstorey@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 20:40:52 by lstorey           #+#    #+#             */
/*   Updated: 2024/03/26 16:35:11 by lstorey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_3(t_ps_list **stack_a)
{
	t_ps_list	*tmp;

	tmp = (*stack_a);
	if (tmp->index == 2 && tmp->next->index == 0)
		ra(stack_a);
	else if (tmp->index == 2 && tmp->next->index == 1)
	{
		ra(stack_a);
		sa(stack_a);
	}
	else if (tmp->index == 0 && tmp->next->index == 2)
	{
		rra(stack_a);
		sa(stack_a);
	}
	else if (tmp->index == 1 && tmp->next->index == 2)
		rra(stack_a);
	else if (tmp->index == 1 && tmp->next->index == 0)
		sa(stack_a);
}
