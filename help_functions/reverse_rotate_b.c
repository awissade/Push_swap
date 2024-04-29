/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_b.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awissade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 20:03:38 by awissade          #+#    #+#             */
/*   Updated: 2024/04/19 15:26:47 by awissade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	reverse_rotate_b(t_stack **stack_b, int print)
{
	t_stack	*last;
	t_stack	*tmp;

	if (!*stack_b || !(*stack_b)->next)
		return ;
	last = *stack_b;
	while (last->next->next)
		last = last->next;
	tmp = last->next;
	last->next = NULL;
	tmp->next = *stack_b;
	*stack_b = tmp;
	if (print == 1)
		ft_putstr_fd("rrb\n", 1);
}
