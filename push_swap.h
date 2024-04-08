/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lstorey <lstorey@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 10:29:22 by lstorey           #+#    #+#             */
/*   Updated: 2024/03/30 15:52:23 by lstorey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "libft/libft.h"
# define MAX_INT 2147483647
# define MIN_INT -2147483648

typedef struct s_ps_list
{
	int					number;
	int					index;
	struct s_ps_list	*next;

}	t_ps_list;

/*						push_swap.c						*/
int			main(int argc, char **argv);
t_ps_list	*new_node(int value);
void		add_to_stack(t_ps_list **stack_a, t_ps_list *new_node);

/*						error_check.c					*/
void		error_check(char **array, int split_flag);

/*				  		my_atoi.c						*/
long		ft_atol(const char *str);

/*			  			ft_free.c						*/
void		free_split(char **arr);
void		free_stack(t_ps_list *stack);

/*			  			swapping.c						*/
void		sa(t_ps_list **stack_a);
void		sb(t_ps_list **stack_b);
void		ss(t_ps_list **stack_a, t_ps_list **stack_b);

/*			  			print_stack.c					*/
void		print_stack(t_ps_list **stack);

/*			  			rotating.c						*/
void		ra(t_ps_list **stack_a);
void		rb(t_ps_list **stack_b);
void		rr(t_ps_list **stack_a, t_ps_list **stack_b);

/*			  			reverse_rotating.c				*/
void		rra(t_ps_list **stack_a);
void		rrb(t_ps_list **stack_b);
void		rrr(t_ps_list **stack_a, t_ps_list **stack_b);
void		reverse_rotate(t_ps_list **stack);

/*			  		reverse_rotating_xtra.c				*/
t_ps_list	*find_penultimate_node(t_ps_list *stack);
t_ps_list	*find_last_node(t_ps_list *stack);

/*			  			pushing.c						*/
void		pa(t_ps_list **stack_a, t_ps_list **stack_b);
void		pb(t_ps_list **stack_a, t_ps_list **stack_b);

/*			  			sorted.c						*/
int			sorted(t_ps_list **stack);

/*			  			error_exit.c					*/
void		error_exit(char **array, int split_flag);

/*			  			sort_stack.c					*/
void		sort_stack(t_ps_list **stack_a);

/*			  			indexing.c						*/
t_ps_list	*find_min(t_ps_list **stack);
void		adding_index(t_ps_list **stack);

/*			  			radix_sort.c					*/
int			list_length(t_ps_list **stack);
void		radix_sort(t_ps_list **stack_a, t_ps_list **stack_b);

/*			  			sort_3.c						*/
void		sort_3(t_ps_list **stack_a);

/*			  			sort_4.c						*/
void		sort_4(t_ps_list **stack_a, t_ps_list **stack_b);

/*			  			sort_5.c						*/
void		sort_5(t_ps_list **stack_a, t_ps_list **stack_b);

/*			  			sort_5_xtra.c					*/
t_ps_list	*find_second_lowest(t_ps_list **stack_a);
int			second_distance_to_top(t_ps_list **stack_a);

#endif