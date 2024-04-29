/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculate_cost.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awissade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 10:00:39 by awissade          #+#    #+#             */
/*   Updated: 2024/04/22 13:49:33 by awissade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	merge_operations(t_cost *cost)
{
	if (cost->ra && cost->rb)
	{
		while (cost->ra && cost->rb)
		{
			cost->ra--;
			cost->rb--;
			cost->rr++;
		}
	}
	if (cost->rra && cost->rrb)
	{
		while (cost->rra && cost->rrb)
		{
			cost->rra--;
			cost->rrb--;
			cost->rrr++;
		}
	}
}

void	is_in_stack_a(t_stack **stack, t_stack *head, t_cost **cost)
{
	t_stack	*tmp;

	tmp = *stack;
	while (tmp)
	{
		if (tmp->value == head->value)
			break ;
		(*cost)->ra++;
		tmp = tmp->next;
	}
	tmp = head;
	while (tmp)
	{
		(*cost)->rra++;
		tmp = tmp->next;
	}
	if ((*cost)->ra <= (*cost)->rra)
		(*cost)->rra = 0;
	else
		(*cost)->ra = 0;
}

void	is_in_stack_b(t_stack **stack, t_stack *head, t_cost **cost)
{
	t_stack	*tmp;

	tmp = *stack;
	while (tmp)
	{
		if (tmp->value == head->value)
			break ;
		(*cost)->rb++;
		tmp = tmp->next;
	}
	tmp = head;
	while (tmp)
	{
		(*cost)->rrb++;
		tmp = tmp->next;
	}
	if ((*cost)->rb <= (*cost)->rrb)
		(*cost)->rrb = 0;
	else
		(*cost)->rb = 0;
}

void	calculate_cost(t_stack **stack, t_stack *head, t_cost **cost,
		int stack_name)
{
	if (stack_name == 'a')
		is_in_stack_a(stack, head, cost);
	else
		is_in_stack_b(stack, head, cost);
	merge_operations(*cost);
	(*cost)->total_cost = (*cost)->ra + (*cost)->rb + (*cost)->rr
		+ (*cost)->rra + (*cost)->rrb + (*cost)->rrr;
}
