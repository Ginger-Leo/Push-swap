/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_exit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lstorey <lstorey@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 13:16:36 by lstorey           #+#    #+#             */
/*   Updated: 2024/03/20 13:24:14 by lstorey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	error_exit(char **array, int split_flag)
{
	if (split_flag == 1)
		free_split(array);
	ft_putendl_fd("Error", 2);
	exit(0);
}
