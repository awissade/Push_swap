/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_prev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awissade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 14:32:11 by awissade          #+#    #+#             */
/*   Updated: 2024/04/22 13:47:21 by awissade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_stack	*find_prev(t_stack *stack, t_stack **stack_b, int *sorted, int size)
{
	t_stack	*tmp;
	int		i;

	i = 0;
	while (i < size)
	{
		if (stack->value == sorted[i])
			break ;
		i++;
	}
	while (i >= 0)
	{
		tmp = *stack_b;
		while (tmp)
		{
			if (sorted[i] == tmp->value)
				return (tmp);
			tmp = tmp->next;
		}
		i--;
	}
	return (NULL);
}
