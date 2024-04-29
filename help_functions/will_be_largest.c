/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   will_be_largest.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awissade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 17:33:15 by awissade          #+#    #+#             */
/*   Updated: 2024/04/21 11:00:35 by awissade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	will_be_largest(t_stack *stack, int value)
{
	t_stack	*tmp;
	int		largest;

	tmp = stack;
	largest = stack->value;
	while (tmp)
	{
		if (tmp->value > largest)
			largest = tmp->value;
		tmp = tmp->next;
	}
	if (value > largest)
		return (1);
	return (0);
}
