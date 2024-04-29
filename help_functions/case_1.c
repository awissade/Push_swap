/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case_1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awissade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 14:17:13 by awissade          #+#    #+#             */
/*   Updated: 2024/04/22 22:02:55 by awissade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	allocate_cost_a_to_b(t_cost **tmp_cost, t_cost **cheapest)
{
	*tmp_cost = malloc(sizeof(t_cost));
	if (!*tmp_cost)
		return (0);
	*cheapest = malloc(sizeof(t_cost));
	if (!*cheapest)
	{
		free(*tmp_cost);
		return (0);
	}
	ft_bzero(*tmp_cost, sizeof(t_cost));
	ft_bzero(*cheapest, sizeof(t_cost));
	return (1);
}

void	deallocate_cost(t_stack **stack_a, t_stack **stack_b, t_cost *tmp_cost,
	t_cost *cheapest)
{
	do_instruction(&cheapest, stack_a, stack_b);
	push_to_b(stack_a, stack_b, 1);
	free(tmp_cost);
	free(cheapest);
}

void	put_cheapest(t_cost **tmp_cost, t_cost **cheapest)
{
	(*cheapest)->ra = (*tmp_cost)->ra;
	(*cheapest)->rb = (*tmp_cost)->rb;
	(*cheapest)->rr = (*tmp_cost)->rr;
	(*cheapest)->rra = (*tmp_cost)->rra;
	(*cheapest)->rrb = (*tmp_cost)->rrb;
	(*cheapest)->rrr = (*tmp_cost)->rrr;
	(*cheapest)->total_cost = (*tmp_cost)->total_cost;
	(*cheapest)->index++;
}

int	case_1(t_stack **stack_a, t_stack **stack_b, int *sorted, int size)
{
	t_cost	*tmp_cost;
	t_cost	*cheapest;
	t_stack	*tmp_a;
	t_stack	*tmp_b;

	tmp_a = *stack_a;
	if (!allocate_cost_a_to_b(&tmp_cost, &cheapest))
		return (0);
	while (tmp_a)
	{
		tmp_b = *stack_b;
		calculate_cost(stack_a, tmp_a, &tmp_cost, 'a');
		if (will_be_max_or_min(stack_b, tmp_a->value))
			calculate_cost(stack_b, find_largest(stack_b), &tmp_cost, 'b');
		else
			calculate_cost(stack_b, find_prev(tmp_a, stack_b, sorted, size),
				&tmp_cost, 'b');
		if (cheapest->index == 0)
			put_cheapest(&tmp_cost, &cheapest);
		else if (tmp_cost->total_cost < cheapest->total_cost)
			put_cheapest(&tmp_cost, &cheapest);
		ft_bzero(tmp_cost, sizeof(t_cost));
		tmp_a = tmp_a->next;
	}
	return (deallocate_cost(stack_a, stack_b, tmp_cost, cheapest), 1);
}
