/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_is_digit.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awissade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 15:59:52 by awissade          #+#    #+#             */
/*   Updated: 2024/04/17 16:25:10 by awissade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	check_is_digit(char **tab)
{
	int	i;
	int	j;
	int	sign;

	j = 0;
	while (tab[j])
	{
		i = 0;
		sign = 0;
		while (tab[j][i])
		{
			if ((tab[j][i] == '-' || tab[j][i] == '+') && !tab[j][i + 1])
				return (0);
			if ((tab[j][i] == '-' || tab[j][i] == '+') && !sign)
				sign = 1;
			else if (!ft_isdigit(tab[j][i]))
				return (0);
			i++;
		}
		j++;
	}
	return (1);
}
