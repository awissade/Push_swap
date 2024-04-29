/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awissade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 16:26:04 by awissade          #+#    #+#             */
/*   Updated: 2024/04/23 23:33:51 by awissade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/push_swap_bonus.h"

int	main(int ac, char **av)
{
	t_var	var;

	var.stack_a = NULL;
	var.stack_b = NULL;
	check_args(ac, av);
	check_args_and_store(ac, av, &var.stack_a, 1);
	var.sorted_array = sort_array(var.stack_a);
	if (!var.sorted_array)
		return (close_programme(&var, 1), 1);
	read_execute_instructions(&var);
	check_is_sorted(&var);
	close_programme(&var, 0);
	return (0);
}
