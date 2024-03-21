/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lstorey <lstorey@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 15:32:29 by lstorey           #+#    #+#             */
/*   Updated: 2024/03/20 15:56:26 by lstorey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	checking_dups(int tmp, char **array)
{
	int	i;

	i = 1;
	while (array[i])
	{
		if (tmp == ft_atol(array[i]))
			return (1);
		i++;
	}
	return (0);
}

static int	number_checker(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
	{
		ft_putendl_fd("Error", 2);
		exit(0);
	}
	if (str[i] == '-' || str[i] == '+')
	{
		i++;
		if (!ft_isdigit(str[i]))
			return (1);
	}
	while (str[i])
	{
		if (ft_isdigit(str[i]) == 0)
			return (1);
		i++;
	}
	return (0);
}

static size_t	my_strlen(const char *str)
{
	size_t	i;

	i = 0;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i])
		i++;
	return (i);
}

void	error_check(char **array, int split_flag)
{
	int		i;
	long	tmp;

	i = 0;
	while (array[i])
	{
		tmp = ft_atol(array[i]);
		if (number_checker(array[i]) == 1)
			error_exit(array, split_flag);
		if (my_strlen(array[i]) > 11)
			error_exit(array, split_flag);
		if (tmp < MIN_INT || tmp > MAX_INT)
			error_exit(array, split_flag);
		if (checking_dups(tmp, &array[i]) == 1)
			error_exit(array, split_flag);
		i++;
	}
}
