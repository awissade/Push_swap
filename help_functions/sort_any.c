/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_any.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awissade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 10:42:37 by awissade          #+#    #+#             */
/*   Updated: 2024/04/22 22:02:29 by awissade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	sort_any(t_stack **stack_a, t_stack **stack_b, int *sorted_array)
{
	int	size;

	size = lstsize(*stack_a);
	push_to_b(stack_a, stack_b, 1);
	push_to_b(stack_a, stack_b, 1);
	while (lstsize(*stack_a) > 3)
	{
		if (!case_1(stack_a, stack_b, sorted_array, size))
			return (0);
	}
	sort_three(stack_a);
	while (lstsize(*stack_b))
	{
		if (!case_2(stack_a, stack_b, sorted_array, size))
			return (0);
	}
	smallest_to_top(stack_a, sorted_array, lstsize(*stack_a));
	return (1);
}
