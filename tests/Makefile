FPATH = ../framework
SRC	=	*.c $(FPATH)/*.a ./ft_strlen/*c
INCLUDES=$(FPATH)

OBJ	=	*.o
NAME = 	tests

CFLAGS += -I $(INCLUDES)

all: $(NAME)

$(NAME):
	gcc -Wall -Werror -Wextra $(SRC) -o $(NAME)

clean: 
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all