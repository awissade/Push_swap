/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awissade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 02:19:24 by awissade          #+#    #+#             */
/*   Updated: 2024/04/24 15:27:31 by awissade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/push_swap.h"

void	handle_cases(t_stack **stack_a, t_stack **stack_b, int *sorted_array)
{
	if (lstsize(*stack_a) == 2)
		sort_two(stack_a);
	else if (lstsize(*stack_a) == 3)
		sort_three(stack_a);
	else if (lstsize(*stack_a) == 4)
		sort_four(stack_a, stack_b, sorted_array);
	else
		sort_any(stack_a, stack_b, sorted_array);
}

int	main(int ac, char **av)
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	int		*sorted_array;

	stack_a = NULL;
	stack_b = NULL;
	check_args(ac, av);
	check_args_and_store(ac, av, &stack_a, 0);
	sorted_array = sort_array(stack_a);
	if (!sorted_array)
	{
		lst_clear(&stack_a);
		return (1);
	}
	handle_cases(&stack_a, &stack_b, sorted_array);
	lst_clear(&stack_a);
	lst_clear(&stack_b);
	free(sorted_array);
	return (0);
}
