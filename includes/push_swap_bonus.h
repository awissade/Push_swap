/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awissade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 22:32:02 by awissade          #+#    #+#             */
/*   Updated: 2024/04/24 11:42:52 by awissade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_BONUS_H
# define PUSH_SWAP_BONUS_H

# include "./push_swap.h"
# include "../get_next_line/get_next_line.h"

typedef struct s_var
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	int		*sorted_array;
}	t_var;

void	close_programme(t_var *var, int exit_value);
void	read_execute_instructions(t_var *var);
void	check_is_sorted(t_var *var);
int		check_the_move(t_var *var, char *line);
void	execute_instruction(t_var *var, char *line);

#endif
