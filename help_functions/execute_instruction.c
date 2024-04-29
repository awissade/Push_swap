/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   execute_instruction.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awissade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 23:34:49 by awissade          #+#    #+#             */
/*   Updated: 2024/04/23 23:35:56 by awissade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap_bonus.h"

void	execute_instruction(t_var *var, char *line)
{
	if (ft_strncmp(line, "pa\n", 4) == 0)
		push_to_a(&var->stack_a, &var->stack_b, 0);
	else if (ft_strncmp(line, "pb\n", 4) == 0)
		push_to_b(&var->stack_a, &var->stack_b, 0);
	else if (ft_strncmp(line, "sa\n", 5) == 0)
		swap_a(&var->stack_a, 0);
	else if (ft_strncmp(line, "sb\n", 5) == 0)
		swap_b(&var->stack_b, 0);
	else if (ft_strncmp(line, "ss\n", 5) == 0)
		swap_both(&var->stack_a, &var->stack_b, 0);
	else if (ft_strncmp(line, "ra\n", 5) == 0)
		rotate_a(&var->stack_a, 0);
	else if (ft_strncmp(line, "rb\n", 5) == 0)
		rotate_b(&var->stack_b, 0);
	else if (ft_strncmp(line, "rr\n", 5) == 0)
		rotate_both(&var->stack_a, &var->stack_b, 0);
	else if (ft_strncmp(line, "rra\n", 5) == 0)
		reverse_rotate_a(&var->stack_a, 0);
	else if (ft_strncmp(line, "rrb\n", 5) == 0)
		reverse_rotate_b(&var->stack_b, 0);
	else if (ft_strncmp(line, "rrr\n", 5) == 0)
		reverse_rotate_both(&var->stack_a, &var->stack_b, 0);
}
