/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lstorey <lstorey@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 10:29:22 by lstorey           #+#    #+#             */
/*   Updated: 2024/03/21 08:56:42 by lstorey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdlib.h>
# include <stdbool.h>
# include <stdio.h>
# include "libft/libft.h"
# define MAX_INT 2147483647
# define MIN_INT -2147483648

typedef struct s_ps_list
{
	int					number;
	struct s_ps_list	*next;

}	t_ps_list;

/*					push_swap.c					*/
int			main(int argc, char **argv);
t_ps_list	*new_node(int value);
void		add_to_stack(t_ps_list **stack_a, t_ps_list *new_node);

/*					error_check.c					*/
void		error_check(char **array, int split_flag);

/*			  		my_atoi.c						*/
long		ft_atol(const char *str);

/*			  		ft_free.c						*/
void		free_split(char **arr);
void		free_stack(t_ps_list *stack_a);

/*			  		swapping.c						*/
void		sa(t_ps_list **stack_a);
void		sb(t_ps_list **stack_b);
void		ss(t_ps_list **stack_a, t_ps_list **stack_b);

/*			  		print_stack.c					*/
void		print_stack(t_ps_list **stack);

/*			  		rotating.c						*/
void		ra(t_ps_list **stack_a);
void		rb(t_ps_list **stack_b);
void		rr(t_ps_list **stack_a, t_ps_list **stack_b);

/*			  		reverse_rotating.c				*/
void		rra(t_ps_list **stack_a);
void		rrb(t_ps_list **stack_b);
void		rrr(t_ps_list **stack_a, t_ps_list **stack_b);

/*			  		pushing.c						*/
void		pa(t_ps_list **stack_a, t_ps_list **stack_b);
void		pb(t_ps_list **stack_a, t_ps_list **stack_b);

/*			  		sorted.c						*/
int			sorted(t_ps_list **stack);

/*			  		error_exit.c					*/
void		error_exit(char **array, int split_flag);

#endif