/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorted.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lstorey <lstorey@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 12:22:45 by lstorey           #+#    #+#             */
/*   Updated: 2024/04/03 14:22:01 by lstorey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	sorted(t_ps_list **stack)
{
	t_ps_list	*tmp;

	if (!stack || !(*stack))
		return (1);
	tmp = (*stack);
	while (tmp->next)
	{
		if (tmp->number > tmp->next->number)
			return (1);
		tmp = tmp->next;
	}
	return (0);
}
