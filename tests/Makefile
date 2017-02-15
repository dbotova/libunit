# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dbotova <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/02/14 19:23:57 by dbotova           #+#    #+#              #
#    Updated: 2017/02/14 19:24:02 by dbotova          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FPATH = ../framework
SRC	=	*.c $(FPATH)/*.a ./strlen/*c ./strcpy/*c

OBJ	=	*.o
NAME = 	tests

all: $(NAME)

$(NAME):
	gcc -Wall -Werror -Wextra $(SRC) -o $(NAME)

clean: 
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
