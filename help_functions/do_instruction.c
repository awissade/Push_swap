/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_instruction.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awissade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 14:55:58 by awissade          #+#    #+#             */
/*   Updated: 2024/04/22 22:00:54 by awissade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	do_rotate(t_cost **cheapest, t_stack **stack_a, t_stack **stack_b)
{
	while ((*cheapest)->ra)
	{
		rotate_a(stack_a, 1);
		(*cheapest)->ra--;
	}
	while ((*cheapest)->rb)
	{
		rotate_b(stack_b, 1);
		(*cheapest)->rb--;
	}
	while ((*cheapest)->rr)
	{
		rotate_both(stack_a, stack_b, 1);
		(*cheapest)->rr--;
	}
}

void	do_reverse_rotate(t_cost **cheapest, t_stack **stack_a,
		t_stack **stack_b)
{
	while ((*cheapest)->rra)
	{
		reverse_rotate_a(stack_a, 1);
		(*cheapest)->rra--;
	}
	while ((*cheapest)->rrb)
	{
		reverse_rotate_b(stack_b, 1);
		(*cheapest)->rrb--;
	}
	while ((*cheapest)->rrr)
	{
		reverse_rotate_both(stack_a, stack_b, 1);
		(*cheapest)->rrr--;
	}
}

void	do_instruction(t_cost **cheapest, t_stack **stack_a, t_stack **stack_b)
{
	do_rotate(cheapest, stack_a, stack_b);
	do_reverse_rotate(cheapest, stack_a, stack_b);
}
