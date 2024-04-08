/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lstorey <lstorey@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 11:13:17 by lstorey           #+#    #+#             */
/*   Updated: 2024/03/26 16:14:34 by lstorey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static long	ovr_flw(long neg)
{
	if (neg == 1)
		return ((long) FT_LONG_MAX);
	return ((long)-FT_LONG_MAX - 1L);
}

long	ft_atol(const char *str)
{
	long	rtn;
	long	neg;
	long	i;
	long	pre;

	rtn = 0;
	neg = 1;
	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg = -1;
		i++;
	}
	while (str[i] != '\0' && (str[i] > 47 && str[i] < 58))
	{
		pre = rtn;
		rtn = (rtn * 10) + (str[i] - 48);
		if (rtn < 0 || pre > rtn)
			return (ovr_flw(neg));
		i++;
	}
	return (rtn * neg);
}
