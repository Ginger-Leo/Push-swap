/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   indexing.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lstorey <lstorey@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 11:15:57 by lstorey           #+#    #+#             */
/*   Updated: 2024/03/26 12:40:13 by lstorey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_ps_list	*find_min(t_ps_list **stack)
{
	t_ps_list	*tmp;
	t_ps_list	*min;

	tmp = (*stack);
	min = (*stack);
	while (tmp)
	{
		if (min->index != -1 && min->next)
		{
			min = min->next;
		}
		if (tmp->number < min->number && tmp->index == -1)
		{
			min = tmp;
		}
		tmp = tmp->next;
	}
	return (min);
}

void	adding_index(t_ps_list **stack)
{
	t_ps_list	*tmp;
	t_ps_list	*count;
	int			i;
	int			c;

	i = 0;
	c = 0;
	count = *stack;
	tmp = find_min(stack);
	while ((count)->next != NULL)
	{
		count = count->next;
		c++;
	}
	while (i <= c)
	{
		tmp->index = i++;
		tmp = find_min(stack);
	}
}
