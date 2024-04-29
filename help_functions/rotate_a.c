/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_a.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awissade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 19:59:56 by awissade          #+#    #+#             */
/*   Updated: 2024/04/19 11:35:54 by awissade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	rotate_a(t_stack **stack_a, int print)
{
	t_stack	*last;

	if (!*stack_a || !(*stack_a)->next)
		return ;
	last = *stack_a;
	while (last->next)
		last = last->next;
	last->next = *stack_a;
	*stack_a = (*stack_a)->next;
	last->next->next = NULL;
	if (print == 1)
		ft_putstr_fd("ra\n", 1);
}
