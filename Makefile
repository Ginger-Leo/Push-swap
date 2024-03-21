# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lstorey <lstorey@student.hive.fi>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/01 10:25:00 by lstorey           #+#    #+#              #
#    Updated: 2024/03/21 08:56:33 by lstorey          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= 	push_swap
CC			= 	gcc
FLAGS		= 	-g -Wall -Werror -Wextra
LIBS 		= 	push_swap.h
SRC 		=	push_swap.c \
				error_check.c \
				ft_atol.c \
				swapping.c\
				print_stack.c\
				ft_free.c\
				rotating.c\
				reverse_rotating.c\
				pushing.c\
				sorted.c\
				error_exit.c


LIBFT 		= 	libft/libft.a 		

OBJ  		= 	$(SRC:.c=.o) 

$(NAME)		:	$(OBJ) 
				cd libft && make all
				cc $(FLAGS) $(OBJ) $(LIBFT) -o $(NAME)
				
all			:	$(NAME)
				

libft		: 	
				make -C libft
clean		:	
				rm -f $(OBJ)
				cd libft && make clean
				 

fclean		:	clean
				rm -f $(NAME)
				cd libft && make fclean

re			:	fclean all

.PHONY 		: all clean fclean re 