/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_both.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awissade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 20:01:44 by awissade          #+#    #+#             */
/*   Updated: 2024/04/22 21:50:22 by awissade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	rotate_both(t_stack **stack_a, t_stack **stack_b, int print)
{
	rotate_a(stack_a, 0);
	rotate_b(stack_b, 0);
	if (print == 1)
		ft_putstr_fd("rr\n", 1);
}
