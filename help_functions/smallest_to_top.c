/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   smallest_to_top.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awissade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 17:41:38 by awissade          #+#    #+#             */
/*   Updated: 2024/04/21 09:47:11 by awissade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_stack	*find_the_smallest(t_stack **stack_a, int *sorted_array, int size)
{
	int		i;
	t_stack	*tmp;

	i = 0;
	while (i < size)
	{
		tmp = *stack_a;
		while (tmp)
		{
			if (tmp->value == sorted_array[i])
				return (tmp);
			tmp = tmp->next;
		}
		i++;
	}
	return (NULL);
}

int	smallest_to_top(t_stack **stack_a, int *sorted_array, int size)
{
	t_stack	*smallest;
	t_cost	*cost;

	cost = malloc(sizeof(t_cost));
	if (!cost)
		return (0);
	ft_bzero(cost, sizeof(t_cost));
	smallest = find_the_smallest(stack_a, sorted_array, size);
	if (!smallest)
		return (free(cost), 0);
	calculate_cost(stack_a, smallest, &cost, 'a');
	do_instruction(&cost, stack_a, NULL);
	free(cost);
	return (1);
}
