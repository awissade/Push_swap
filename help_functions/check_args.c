/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awissade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 13:14:53 by awissade          #+#    #+#             */
/*   Updated: 2024/04/19 11:36:39 by awissade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	check_is_valid(char **tab)
{
	int	is_digit;
	int	is_int;

	if (!*tab)
		return (0);
	is_digit = check_is_digit(tab);
	is_int = check_is_int(tab);
	if (!is_digit || !is_int)
		return (0);
	return (1);
}

void	check_args(int ac, char **av)
{
	int		i;
	int		for_error;
	char	**tmp_tab;

	if (ac == 1)
		exit (0);
	i = 1;
	while (i < ac)
	{
		tmp_tab = ft_split(av[i], ' ');
		if (!tmp_tab)
		{
			ft_putstr_fd("Error : Memory allocation failed\n", 2);
			exit (1);
		}
		for_error = check_is_valid(tmp_tab);
		ft_free(tmp_tab);
		if (for_error == 0)
		{
			ft_putstr_fd("Error\n", 2);
			exit (1);
		}
		i++;
	}
}
