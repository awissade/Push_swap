/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_array.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awissade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 17:08:01 by awissade          #+#    #+#             */
/*   Updated: 2024/04/20 17:09:32 by awissade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_sort_the_array(int *sort_array, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (sort_array[i] > sort_array[j])
			{
				tmp = sort_array[i];
				sort_array[i] = sort_array[j];
				sort_array[j] = tmp;
			}
			j++;
		}
		i++;
	}
}

int	*sort_array(t_stack *stack_a)
{
	t_stack	*tmp;
	int		*sorted_array;
	int		size;
	int		i;

	i = 0;
	tmp = stack_a;
	size = lstsize(stack_a);
	sorted_array = malloc(sizeof(int) * size);
	if (!sorted_array)
		return (NULL);
	while (tmp)
	{
		sorted_array[i] = tmp->value;
		tmp = tmp->next;
		i++;
	}
	ft_sort_the_array(sorted_array, size);
	return (sorted_array);
}
