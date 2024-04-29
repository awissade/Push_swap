/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   close_programme.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awissade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 23:53:00 by awissade          #+#    #+#             */
/*   Updated: 2024/04/23 23:53:48 by awissade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap_bonus.h"

void	close_programme(t_var *var, int exit_value)
{
	lst_clear(&var->stack_a);
	lst_clear(&var->stack_b);
	free(var->sorted_array);
	exit (exit_value);
}
