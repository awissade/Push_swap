/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   next_to_top.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awissade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 20:37:14 by awissade          #+#    #+#             */
/*   Updated: 2024/04/22 13:47:00 by awissade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_stack	*find_next(t_stack **stack_a, t_stack **stack_b, int *sorted, int size)
{
	t_stack	*tmp;
	int		i;

	i = 0;
	while (i < size)
	{
		if ((*stack_b)->value == sorted[i])
			break ;
		i++;
	}
	while (i < size)
	{
		tmp = *stack_a;
		while (tmp)
		{
			if (tmp->value == sorted[i])
				return (tmp);
			tmp = tmp->next;
		}
		i++;
	}
	return (NULL);
}

int	next_to_top(t_stack **stack_a, t_stack **stack_b, int *sorted, int size)
{
	t_stack	*next;
	t_cost	*cost;

	cost = malloc(sizeof(t_cost));
	if (!cost)
		return (0);
	ft_bzero(cost, sizeof(t_cost));
	next = find_next(stack_a, stack_b, sorted, size);
	if (!next)
	{
		free(cost);
		return (0);
	}
	calculate_cost(stack_a, next, &cost, 'a');
	do_instruction(&cost, stack_a, stack_b);
	free(cost);
	return (1);
}
