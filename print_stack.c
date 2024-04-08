/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lstorey <lstorey@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 12:34:16 by lstorey           #+#    #+#             */
/*   Updated: 2024/03/23 22:05:13 by lstorey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_stack(t_ps_list **stack_a)
{
	t_ps_list	*tmp;

	tmp = *stack_a;
	while (tmp)
	{
		ft_printf("number:%d\nindex:%d\n\n", tmp->number, tmp->index);
		tmp = tmp->next;
	}
}
