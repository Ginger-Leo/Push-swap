/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lstorey <lstorey@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 12:34:16 by lstorey           #+#    #+#             */
/*   Updated: 2024/03/20 09:14:09 by lstorey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void print_stack(t_ps_list **stack_a)
{
	t_ps_list	*tmp;

	tmp = *stack_a;
	while (tmp)
	{
		ft_printf("%d\n", tmp->number);
		tmp = tmp->next;
	}
}
