# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: awissade <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/17 16:05:12 by awissade          #+#    #+#              #
#    Updated: 2024/04/24 11:35:46 by awissade         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC			=		cc
CFLAGS		=		-Wextra -Werror -Wall


LIBFT_DIR	=		./libft
LIBFT		=		$(LIBFT_DIR)/libft.a

NAME		=		push_swap
BONUS_NAME	=		checker

S_FILES		=		push_swap.c \
					help_functions/check_args.c help_functions/check_is_digit.c \
					help_functions/check_is_int.c help_functions/ft_strtol.c \
					help_functions/ft_free.c help_functions/check_args_and_store.c \
					help_functions/sort_array.c \
					help_functions/lst_new.c help_functions/lstadd_back.c \
					help_functions/lst_clear.c help_functions/lstdel_one.c \
					help_functions/lstsize.c \
					help_functions/swap_a.c help_functions/swap_b.c help_functions/swap_both.c\
					help_functions/rotate_a.c help_functions/rotate_b.c help_functions/rotate_both.c\
					help_functions/push_to_a.c help_functions/push_to_b.c\
					help_functions/reverse_rotate_a.c help_functions/reverse_rotate_b.c\
					help_functions/reverse_rotate_both.c help_functions/do_instruction.c\
					help_functions/sort_two.c help_functions/sort_three.c help_functions/sort_four.c\
					help_functions/sort_any.c help_functions/case_1.c help_functions/case_2.c \
					help_functions/find_largest.c help_functions/find_prev.c\
					help_functions/will_be_largest.c help_functions/smallest_to_top.c\
					help_functions/will_be_max_or_min.c \
					help_functions/calculate_cost.c help_functions/next_to_top.c

S_O_FILES		=		$(S_FILES:%.c=%.o)

B_FILES			=	checker.c \
					help_functions/check_args.c help_functions/check_is_digit.c \
					help_functions/check_is_int.c help_functions/ft_strtol.c \
					help_functions/ft_free.c help_functions/check_args_and_store.c \
					help_functions/sort_array.c \
					help_functions/lst_new.c help_functions/lstadd_back.c \
					help_functions/lst_clear.c help_functions/lstdel_one.c \
					help_functions/lstsize.c \
					help_functions/swap_a.c help_functions/swap_b.c help_functions/swap_both.c \
					help_functions/rotate_a.c help_functions/rotate_b.c help_functions/rotate_both.c\
					help_functions/push_to_a.c help_functions/push_to_b.c \
					help_functions/reverse_rotate_a.c help_functions/reverse_rotate_b.c \
					help_functions/reverse_rotate_both.c \
					help_functions/check_is_sorted.c help_functions/close_programme.c\
					help_functions/read_execute_instructions.c help_functions/check_the_move.c \
					help_functions/execute_instruction.c\
					get_next_line/get_next_line.c get_next_line/get_next_line_utils.c\


B_O_FILES		=		$(B_FILES:%.c=%.o)

all				:		$(NAME)

bonus			:		$(BONUS_NAME)


$(NAME)			:		$(LIBFT) $(S_O_FILES)
				$(CC) $(CFLAGS) $(S_O_FILES) $(LIBFT) -o $(NAME)

$(BONUS_NAME)	:	$(LIBFT) $(B_O_FILES)
				$(CC) $(CFLAGS) $(B_O_FILES) $(LIBFT) -o $(BONUS_NAME)

$(LIBFT)		:
				@make -C $(LIBFT_DIR)
				@make -C $(LIBFT_DIR) bonus

clean			:
				rm -rf $(S_O_FILES)
				rm -rf $(B_O_FILES)
				@make -C $(LIBFT_DIR) clean

fclean			:		clean
				rm -rf $(NAME)
				rm -rf $(BONUS_NAME)
				@make -C $(LIBFT_DIR) fclean

re			:		fclean all

re_bonus	:		fclean bonus

.PHONY		:		all clean fclean re
.SECONDARY	:		$(S_O_FILES) $(B_O_FILES)
