/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_execute_instructions.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awissade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 23:54:17 by awissade          #+#    #+#             */
/*   Updated: 2024/04/23 23:54:57 by awissade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap_bonus.h"

void	read_execute_instructions(t_var *var)
{
	char	*line;
	int		ret;

	ret = 0;
	while (ret == 0)
	{
		line = get_next_line(0);
		ret = check_the_move(var, line);
		if (ret == 0)
			execute_instruction(var, line);
		free(line);
		if (ret == 1)
			break ;
	}
}
