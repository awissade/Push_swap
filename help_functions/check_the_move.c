/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_the_move.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awissade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 23:36:36 by awissade          #+#    #+#             */
/*   Updated: 2024/04/23 23:43:21 by awissade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap_bonus.h"

int	check_the_move(t_var *var, char *line)
{
	if (!line)
		return (1);
	if (ft_strncmp(line, "pa\n", 4) == 0 || ft_strncmp(line, "pb\n", 4) == 0)
		return (0);
	else if (ft_strncmp(line, "sa\n", 4) == 0
		|| ft_strncmp(line, "sb\n", 4) == 0)
		return (0);
	else if (ft_strncmp(line, "ss\n", 4) == 0)
		return (0);
	else if (ft_strncmp(line, "ra\n", 4) == 0
		|| ft_strncmp(line, "rb\n", 4) == 0)
		return (0);
	else if (ft_strncmp(line, "rra\n", 5) == 0
		|| ft_strncmp(line, "rrb\n", 5) == 0)
		return (0);
	else if (ft_strncmp(line, "rr\n", 4) == 0
		|| ft_strncmp(line, "rrr\n", 5) == 0)
		return (0);
	else
	{
		ft_putstr_fd("Error\n", 2);
		free(line);
		close_programme(var, 1);
	}
	return (1);
}
