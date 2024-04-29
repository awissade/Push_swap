/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtol.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awissade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 16:49:00 by awissade          #+#    #+#             */
/*   Updated: 2024/04/24 22:23:53 by awissade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

long	ft_strtol(char **tab, const char *str)
{
	int		i;
	int		sign;
	long	result;

	i = 0;
	sign = 1;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	result = 0;
	while (str[i])
	{
		result = result * 10 + str[i] - '0';
		if (result > INT_MAX || result < INT_MIN)
		{
			ft_putstr_fd("Error\n", 2);
			ft_free(tab);
			exit (1);
		}
		i++;
	}
	return (result * sign);
}
