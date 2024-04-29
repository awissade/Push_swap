/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case_2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awissade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 20:36:28 by awissade          #+#    #+#             */
/*   Updated: 2024/04/22 22:03:33 by awissade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	case_2(t_stack **stack_a, t_stack **stack_b, int *sorted_array, int size)
{
	if (will_be_largest(*stack_a, (*stack_b)->value))
	{
		if (!smallest_to_top(stack_a, sorted_array, size))
			return (0);
		push_to_a(stack_a, stack_b, 1);
	}
	else
	{
		if (!next_to_top(stack_a, stack_b, sorted_array, size))
			return (0);
		push_to_a(stack_a, stack_b, 1);
	}
	return (1);
}
