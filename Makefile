# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jcardina <jcardina@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/12 15:52:29 by jcardina          #+#    #+#              #
#    Updated: 2023/06/19 16:34:15 by jcardina         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

MAKEFLAGS += --silent

NAME = push_swap
LIBFT = libft/libft.a
PRINTF = ft_printf/libftprintf.a

SRC = \
	listutils.c\
	push_swap.c \
	workutils.c \
	init_b.c \
	ok_input.c \
	moves/moves_r.c \
	moves/moves_rr.c \
	moves/moves_p.c \
	moves/moves_s.c \
	algoritm/best_move.c \
	algoritm/inst_reader.c \

OBJ = $(SRC:%.c=%.o)

CC = gcc

CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME) : $(OBJ)
	make all bonus -C libft
	make -C ft_printf
	$(CC) $(CFLAGS) $(LIBFT) $(PRINTF) $(OBJ) -o push_swap
	@echo "\033[32mcompiled\033[0m"

clean:
	make clean -C libft
	make clean -C ft_printf
	rm -f $(OBJ)
	@echo "\033[33mniente sugo\033[0m"

fclean: clean
	make fclean -C libft
	make fclean -C ft_printf
	rm -f $(NAME)
	@echo "\033[33me niente nome\033[0m"

re: fclean all

.PHONY:		all clean fclean re
