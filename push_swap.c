/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lstorey <lstorey@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 10:25:03 by lstorey           #+#    #+#             */
/*   Updated: 2024/02/07 12:38:03 by lstorey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	main(int argc, char **argv)
{
	int		i;
	char	**new_argv_array;

	i = 1;
	while (i <= argc)
	{
		if (argc == 2)
			**new_arg_array = ft_split(argv[1], ' ');
			valid_input(**new_arg_array)
		else
			valid_input(argv[1++])
			add_to_stack(argv[1++]);
		i++;
	}
}

t_list	add_to_stack(char **n)
{
	t_list	*stack_a;
	t_list	*stack_b;

	stack_a = malloc(sizeof t_list);
	stack_b = malloc(sizeof t_list);
	if (stack_a == NULL || stack_b == NULL)
		free (stack_a, stack_b)
	**n = stack_a->number;
	stack_a->next = NULL;
}

static char ft_split(**argv, char delim)
{
	char	**new_arg_array;
	int		i;

	i = 0;
	while (agrv[i++])
		if (argv[i] == delim)
			


	return (new_arg_array);
}