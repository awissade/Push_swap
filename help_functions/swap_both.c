/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_both.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awissade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 19:57:07 by awissade          #+#    #+#             */
/*   Updated: 2024/04/22 21:47:12 by awissade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	swap_both(t_stack **stack_a, t_stack **stack_b, int print)
{
	swap_a(stack_a, 0);
	swap_b(stack_b, 0);
	if (print == 1)
		ft_putstr_fd("ss\n", 1);
}
