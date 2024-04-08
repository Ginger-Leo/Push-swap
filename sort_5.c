/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_5.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lstorey <lstorey@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 22:24:28 by lstorey           #+#    #+#             */
/*   Updated: 2024/03/26 16:27:40 by lstorey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_ps_list	*find_lowest(t_ps_list **stack_a)
{
	t_ps_list	*tmp;
	t_ps_list	*lowest;

	tmp = (*stack_a);
	lowest = (*stack_a);
	while (tmp->next)
	{
		if (tmp->next->index < tmp->index)
			lowest = tmp->next;
		tmp = tmp->next;
	}
	return (lowest);
}

static int	distance_to_top(t_ps_list **stack_a)
{
	int			distance;
	t_ps_list	*tmp;

	distance = 0;
	tmp = (*stack_a);
	while (tmp)
	{
		if (tmp->index != 0)
			distance++;
		else
			return (distance);
		tmp = tmp->next;
	}
	return (distance);
}

static void	first_move(t_ps_list **stack_a, t_ps_list **stack_b, int distance)
{
	if (distance == 0)
		pb(stack_a, stack_b);
	else if (distance == 1)
	{
		ra(stack_a);
		pb(stack_a, stack_b);
	}
	else if (distance == 2)
	{
		ra(stack_a);
		ra(stack_a);
		pb(stack_a, stack_b);
	}
	else if (distance == 3)
	{
		rra(stack_a);
		rra(stack_a);
		pb(stack_a, stack_b);
	}
	else
	{
		rra(stack_a);
		pb(stack_a, stack_b);
	}
}

static void	second_move(t_ps_list **stack_a, t_ps_list **stack_b, int distance)
{
	if (distance == 0)
		pb(stack_a, stack_b);
	else if (distance == 1)
	{
		ra(stack_a);
		pb(stack_a, stack_b);
	}
	else if (distance == 2)
	{
		ra(stack_a);
		ra(stack_a);
		pb(stack_a, stack_b);
	}
	else
	{
		rra(stack_a);
		pb(stack_a, stack_b);
	}
}

void	sort_5(t_ps_list **stack_a, t_ps_list **stack_b)
{
	t_ps_list	*lowest;
	int			distance;
	t_ps_list	*tmp;

	lowest = find_lowest(stack_a);
	distance = distance_to_top(stack_a);
	first_move(stack_a, stack_b, distance);
	lowest = find_second_lowest(stack_a);
	distance = second_distance_to_top(stack_a);
	second_move(stack_a, stack_b, distance);
	tmp = (*stack_a);
	while (tmp)
	{
		tmp->index = -1;
		tmp = tmp->next;
	}
	adding_index(stack_a);
	sort_3(stack_a);
	pa(stack_a, stack_b);
	pa(stack_a, stack_b);
}
