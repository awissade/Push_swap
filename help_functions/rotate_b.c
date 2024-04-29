/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_b.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awissade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 20:01:03 by awissade          #+#    #+#             */
/*   Updated: 2024/04/19 11:29:16 by awissade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	rotate_b(t_stack **stack_b, int print)
{
	t_stack	*last;

	if (!*stack_b || !(*stack_b)->next)
		return ;
	last = *stack_b;
	while (last->next)
		last = last->next;
	last->next = *stack_b;
	*stack_b = (*stack_b)->next;
	last->next->next = NULL;
	if (print == 1)
		ft_putstr_fd("rb\n", 1);
}
