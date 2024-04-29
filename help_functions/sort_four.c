/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_four.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awissade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 14:59:21 by awissade          #+#    #+#             */
/*   Updated: 2024/04/22 22:01:53 by awissade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	sort_four(t_stack **stack_a, t_stack **stack_b, int *sorted_array)
{
	int	size;

	size = lstsize(*stack_a);
	push_to_b(stack_a, stack_b, 1);
	sort_three(stack_a);
	if (will_be_largest(*stack_a, (*stack_b)->value))
	{
		push_to_a(stack_a, stack_b, 1);
		rotate_a(stack_a, 1);
	}
	else
	{
		if (!next_to_top(stack_a, stack_b, sorted_array, size))
			return (0);
		push_to_a(stack_a, stack_b, 1);
		if (!smallest_to_top(stack_a, sorted_array, size))
			return (0);
	}
	return (1);
}
