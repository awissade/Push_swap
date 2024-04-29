/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args_and_store.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awissade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 18:34:32 by awissade          #+#    #+#             */
/*   Updated: 2024/04/19 11:41:49 by awissade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	check_duplicate(t_stack **stack_a)
{
	t_stack	*tmp;
	t_stack	*tmp2;

	tmp = *stack_a;
	while (tmp)
	{
		tmp2 = tmp->next;
		while (tmp2)
		{
			if (tmp->value == tmp2->value)
			{
				ft_putstr_fd("Error\n", 2);
				lst_clear(stack_a);
				exit(1);
			}
			tmp2 = tmp2->next;
		}
		tmp = tmp->next;
	}
}

void	read_args(int ac, char **av, t_stack **stack_a)
{
	int		i;
	int		j;
	char	**args;

	j = 1;
	while (j < ac)
	{
		i = 0;
		args = ft_split(av[j], ' ');
		while (args[i])
		{
			lstadd_back(stack_a, lst_new(ft_atoi(args[i])));
			i++;
		}
		ft_free(args);
		j++;
	}
}

int	check_if_sorted(t_stack **stack_a)
{
	t_stack	*tmp;

	tmp = *stack_a;
	while (tmp->next)
	{
		if (tmp->value > tmp->next->value)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}

void	check_args_and_store(int ac, char **av, t_stack **stack_a, int bonus)
{
	read_args(ac, av, stack_a);
	check_duplicate(stack_a);
	if (bonus == 0)
	{
		if (check_if_sorted(stack_a))
		{
			lst_clear(stack_a);
			exit (0);
		}
	}
}
