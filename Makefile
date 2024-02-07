# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lstorey <lstorey@student.hive.fi>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/01 10:25:00 by lstorey           #+#    #+#              #
#    Updated: 2024/02/01 10:32:20 by lstorey          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= push_swap.a
CC			= gcc
FLAGS		= -Wall -Werror -Wextra
LIBS 		= push_swap.h
INCLUDES	= ./
SRC 		=	push_swap.c

OBJ  = $(SRC:.c=.o) 

$(NAME)		:	$(OBJ)
			@ar -rcs $(NAME) $(OBJ)

%.o			:%.c
			@CC $(FLAGS) -c $< -o $@

all			:	$(NAME)

clean		:
			@rm -f $(OBJ) 

fclean		:	clean
			@rm -f $(NAME)

re			:	fclean all

.PHONY 		: all clean fclean re 