/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awissade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 02:18:34 by awissade          #+#    #+#             */
/*   Updated: 2024/04/24 17:11:19 by awissade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include <stdlib.h>
# include <limits.h>

typedef struct s_stack
{
	int				value;
	struct s_stack	*next;
}	t_stack;
typedef struct s_cost
{
	int	index;
	int	ra;
	int	rb;
	int	rr;
	int	rra;
	int	rrb;
	int	rrr;
	int	total_cost;
}	t_cost;

void	check_args_and_store(int ac, char **av, t_stack **stack_a, int bonus);
void	check_args(int ac, char **av);
int		check_is_digit(char **tab);
int		check_is_int(char **tab);
void	ft_free(char **tab);
long	ft_strtol(char **tab, const char *str);
int		*sort_array(t_stack *stack_a);
void	lstadd_back(t_stack **lst, t_stack *new_node);
void	lst_clear(t_stack **lst);
void	lstdel_one(t_stack *lst);
t_stack	*lst_new(int value);
int		lstsize(t_stack *lst);
void	swap_a(t_stack **stack_a, int print);
void	swap_b(t_stack **stack_b, int print);
void	swap_both(t_stack **stack_a, t_stack **stack_b, int print);
void	rotate_a(t_stack **stack_a, int print);
void	rotate_b(t_stack **stack_b, int print);
void	rotate_both(t_stack **stack_a, t_stack **stack_b, int print);
void	push_to_a(t_stack **stack_a, t_stack **stack_b, int print);
void	push_to_b(t_stack **stack_a, t_stack **stack_b, int print);
void	reverse_rotate_a(t_stack **stack_a, int print);
void	reverse_rotate_b(t_stack **stack_b, int print);
void	reverse_rotate_both(t_stack **stack_a, t_stack **stack_b, int print);
void	do_instruction(t_cost **cheapest, t_stack **stack_a, t_stack **stack_b);
void	sort_two(t_stack **stack_a);
void	sort_three(t_stack **stack_a);
int		sort_four(t_stack **stack_a, t_stack **stack_b, int *sorted_array);
int		sort_any(t_stack **stack_a, t_stack **stack_b, int *sorted_array);
int		case_1(t_stack **stack_a, t_stack **stack_b, int *sorted, int size);
int		case_2(t_stack **stack_a, t_stack **stack_b, int *sorted_array,
			int size);
t_stack	*find_largest(t_stack **stack);
t_stack	*find_prev(t_stack *stack, t_stack **stack_b, int *sorted, int size);
int		will_be_largest(t_stack *stack_a, int value);
int		will_be_max_or_min(t_stack **stack_b, int value);
int		smallest_to_top(t_stack **stack_a, int *sorted_array, int size);
int		next_to_top(t_stack **stack_a, t_stack **stack_b, int *sorted,
			int size);
void	calculate_cost(t_stack **stack, t_stack *head, t_cost **cost,
			int stack_name);

#endif
