/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_is_sorted.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awissade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 23:55:18 by awissade          #+#    #+#             */
/*   Updated: 2024/04/23 23:56:01 by awissade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap_bonus.h"

void	check_is_sorted(t_var *var)
{
	t_stack	*tmp;
	int		i;

	if (var->stack_b)
	{
		ft_putstr_fd("KO\n", 1);
		return ;
	}
	i = 0;
	tmp = var->stack_a;
	while (tmp)
	{
		if (tmp->value != var->sorted_array[i])
		{
			ft_putstr_fd("KO\n", 1);
			return ;
		}
		i++;
		tmp = tmp->next;
	}
	ft_putstr_fd("OK\n", 1);
}
