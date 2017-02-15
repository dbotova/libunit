# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dbotova <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/02/14 19:26:28 by dbotova           #+#    #+#              #
#    Updated: 2017/02/14 19:26:38 by dbotova          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC	= launch_tests.c load_test.c new_test.c print_results.c free_all.c libunit.h libft.h

OBJ	= launch_tests.o load_test.o new_test.o print_results.o free_all.o
NAME = libunit.a

all: $(NAME)

$(NAME):
	gcc -c -Wall -Werror -Wextra $(SRC)
	ar rc $(NAME) $(OBJ)

clean: 
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
