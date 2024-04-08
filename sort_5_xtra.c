/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_5_xtra.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lstorey <lstorey@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 10:05:00 by lstorey           #+#    #+#             */
/*   Updated: 2024/03/26 16:26:59 by lstorey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_ps_list	*find_second_lowest(t_ps_list **stack_a)
{
	t_ps_list	*tmp;
	t_ps_list	*second_lowest;

	tmp = (*stack_a);
	second_lowest = (*stack_a);
	while (tmp->next)
	{
		if (tmp->next->index < tmp->index && tmp->index != 0)
			second_lowest = tmp->next;
		tmp = tmp->next;
	}
	return (second_lowest);
}

int	second_distance_to_top(t_ps_list **stack_a)
{
	int			distance;
	t_ps_list	*tmp;

	distance = 0;
	tmp = (*stack_a);
	while (tmp)
	{
		if (tmp->index != 1)
			distance++;
		else
			return (distance);
		tmp = tmp->next;
	}
	return (distance);
}
