/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_largest.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awissade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 14:26:54 by awissade          #+#    #+#             */
/*   Updated: 2024/04/21 14:31:46 by awissade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_stack	*find_largest(t_stack **stack)
{
	t_stack	*tmp;
	t_stack	*largest;

	tmp = *stack;
	largest = *stack;
	while (tmp)
	{
		if (tmp->value > largest->value)
			largest = tmp;
		tmp = tmp->next;
	}
	return (largest);
}
