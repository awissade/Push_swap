/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   will_be_max_or_min.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awissade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 13:10:00 by awissade          #+#    #+#             */
/*   Updated: 2024/04/21 13:26:34 by awissade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	will_be_max_or_min(t_stack **stack_b, int value)
{
	t_stack	*tmp;
	int		smallest;
	int		largest;

	tmp = *stack_b;
	smallest = (*stack_b)->value;
	largest = (*stack_b)->value;
	while (tmp)
	{
		if (tmp->value < smallest)
			smallest = tmp->value;
		if (tmp->value > largest)
			largest = tmp->value;
		tmp = tmp->next;
	}
	if (value < smallest || value > largest)
		return (1);
	return (0);
}
