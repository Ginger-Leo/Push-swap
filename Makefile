# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lstorey <lstorey@student.hive.fi>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/01 10:25:00 by lstorey           #+#    #+#              #
#    Updated: 2024/03/30 15:42:09 by lstorey          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= 	push_swap
CC			= 	cc
FLAGS		= 	-Wall -Werror -Wextra -g
LIBS 		= 	push_swap.h
SRC 		=	push_swap.c \
				error_check.c \
				ft_atol.c \
				swapping.c\
				print_stack.c\
				ft_free.c\
				rotating.c\
				reverse_rotating.c\
				reverse_rotating_xtra.c\
				pushing.c\
				sorted.c\
				error_exit.c\
				sort_stack.c\
				indexing.c\
				radix_sort.c\
				sort_3.c\
				sort_4.c\
				sort_5.c\
				sort_5_xtra.c


LIBFT 		= 	libft/libft.a 		

OBJ  		= 	$(SRC:.c=.o) 

$(NAME)		:	$(OBJ) 
				cd libft && make all
				cc $(FLAGS) $(OBJ) $(LIBFT) -o $(NAME)
				
%.o			:	%.c
				@CC $(FLAGS) -c $< -o $@
				
				
all			:	$(NAME)

leaks		:
				$(CC) $(FLAGS) -g leaks --atExit-- $(SRC) $(LIBFT) -o leaks 
san			:
				$(CC) $(FLAGS) -g -fsanitize=address -static-libsan $(SRC) $(LIBFT) -o san 

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