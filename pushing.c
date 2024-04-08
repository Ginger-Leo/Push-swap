/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lstorey <lstorey@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 09:03:27 by lstorey           #+#    #+#             */
/*   Updated: 2024/03/23 22:04:42 by lstorey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

				/* ************************************* */
				/*	pa - push to A. top elements to A	 */
				/*	pb - push to B. top elements to B	 */
				/* ************************************* */

#include "push_swap.h"

static void	push(t_ps_list **src_list, t_ps_list **dest_list)
{
	t_ps_list	*top_src;
	t_ps_list	*top_dest;
	t_ps_list	*sec_src;

	if (!src_list)
		return ;
	top_src = (*src_list);
	top_dest = (*dest_list);
	if (top_src->next == NULL)
		sec_src = NULL;
	else
		sec_src = top_src->next;
	if (!*dest_list)
		top_src->next = NULL;
	else
		top_src->next = top_dest;
	(*dest_list) = top_src;
	(*src_list) = sec_src;
}

void	pa(t_ps_list **stack_a, t_ps_list **stack_b)
{
	push(stack_b, stack_a);
	ft_printf("pa\n");
}

void	pb(t_ps_list **stack_a, t_ps_list **stack_b)
{
	push(stack_a, stack_b);
	ft_printf("pb\n");
}
