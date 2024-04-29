/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awissade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 21:52:46 by awissade          #+#    #+#             */
/*   Updated: 2024/04/22 13:45:49 by awissade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	case_n1(t_stack **stack_a)
{
	if ((*stack_a)->value > (*stack_a)->next->next->value)
	{
		if ((*stack_a)->next->value > (*stack_a)->next->next->value)
		{
			rotate_a(stack_a, 1);
			swap_a(stack_a, 1);
		}
		else
			rotate_a(stack_a, 1);
	}
	else
		swap_a(stack_a, 1);
}

void	case_n2(t_stack **stack_a)
{
	if ((*stack_a)->value > (*stack_a)->next->next->value)
		reverse_rotate_a(stack_a, 1);
	else if ((*stack_a)->next->value > (*stack_a)->next->next->value)
	{
		swap_a(stack_a, 1);
		rotate_a(stack_a, 1);
	}
}

void	sort_three(t_stack **stack_a)
{
	if ((*stack_a)->value > (*stack_a)->next->value)
		case_n1(stack_a);
	else
		case_n2(stack_a);
}
