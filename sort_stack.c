/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lstorey <lstorey@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 09:18:31 by lstorey           #+#    #+#             */
/*   Updated: 2024/03/30 15:41:27 by lstorey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_stack(t_ps_list **stack_a)
{
	int			c;
	t_ps_list	*stack_b;

	stack_b = NULL;
	c = list_length(stack_a);
	adding_index(stack_a);
	if (c == 2)
		sa(stack_a);
	else if (c == 3)
		sort_3(stack_a);
	else if (c == 4)
		sort_4(stack_a, &stack_b);
	else if (c == 5)
		sort_5(stack_a, &stack_b);
	else
		radix_sort(stack_a, &stack_b);
	free_stack(*stack_a);
	free_stack(stack_b);
}
