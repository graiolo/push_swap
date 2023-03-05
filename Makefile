# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: graiolo <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/02 19:41:16 by graiolo           #+#    #+#              #
#    Updated: 2023/03/05 21:44:19 by graiolo          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	push_swap

B_NAME	=	checker

CC	=	cc

CFLAGS	=	-Wall -Werror -Wextra

SRC	=	src/elem/ft_check.c src/elem/ft_count_elem.c src/elem/ft_long_atoi.c src/elem/ft_split.c \
				src/list/ft_find_list.c src/list/ft_init_del_head.c src/list/ft_list_utils.c src/list/ft_list.c \
				src/moves/ft_moves_push.c src/moves/ft_moves_reverse_rotate.c src/moves/ft_moves_rotate.c src/moves/ft_moves_swipe.c \
				src/sort/ft_sort_five.c src/sort/ft_sort_tons_elem.c src/sort/ft_sort_tree.c src/sort/ft_sort_two.c \
				src/buble_sort/ft_buble_sort.c \
				src/push_swap.c

SRC_BONUS =	src/elem/ft_check.c src/elem/ft_count_elem.c src/elem/ft_long_atoi.c src/elem/ft_split.c \
				src/list/ft_find_list.c src/list/ft_init_del_head.c src/list/ft_list_utils.c src/list/ft_list.c \
				src/moves/ft_moves_push.c src/moves/ft_moves_reverse_rotate.c src/moves/ft_moves_rotate.c src/moves/ft_moves_swipe.c \
				src/moves_bonus/ft_moves_push_bonus.c src/moves_bonus/ft_moves_reverse_rotate_bonus.c \
				src/moves_bonus/ft_moves_rotate_bonus.c src/moves_bonus/ft_moves_swipe_bonus.c \
				src/sort/ft_sort_five.c src/sort/ft_sort_tons_elem.c src/sort/ft_sort_tree.c src/sort/ft_sort_two.c \
				src/get_next_line/ft_get_next_line.c \
				src/checker.c

OBJ	=	$(SRC:.c=.o)

OBJ_BONUS = $(SRC_BONUS:.c=.o)

%.o:%.c
	@$(CC) $(CFLAGS) -c $< -o $@ -I include

all:	$(NAME)

$(NAME):	$(OBJ)
		@$(CC) $(CFLAG) $(OBJ) -o $(NAME)
		@echo "$(NAME) compilato correttamente!"

clean:
		@rm -f $(OBJ) $(OBJ_BONUS)
		@echo "obj file rimossi correttamente!"

fclean:	clean
		@rm -f $(NAME) $(B_NAME)
		@echo "$(NAME) rimosso correttamente!"

bonus:	$(OBJ_BONUS)
		@$(CC) $(CFLAG) $(OBJ_BONUS) -o $(B_NAME)
		@echo "$(B_NAME) compilato correttamente!"

re: fclean all

.PHONY: all clean fclean bonus re
