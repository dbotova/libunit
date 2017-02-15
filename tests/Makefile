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

OBJ = main.o \
      strlen/00_launcher.o \
      strlen/01_basic_test.o \
      strlen/02_null_test.o \
      strlen/03_bigger_str_test.o

HEADERS = strlen/ft_strlen_tests.h \
          tests.h

NAME = tests

LIBUNIT=$(FPATH)/libunit.a
LIBFT=$(FPATH)/libft.a

CFLAGS += -Wall -Werror -Wextra
LFLAGS += -Wall -Werror -Wextra

all: $(NAME)

$(LIBUNIT):
	$(MAKE) -C $(FPATH)

$(OBJ): $(HEADERS)

$(NAME): $(OBJ) $(LIBUNIT)
	$(CC) $(LFLAGS) $(OBJ) $(LIBUNIT) $(LIBFT) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
