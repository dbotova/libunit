FPATH = ./framework
SRC	=	./tests/*.c ./tests/ft_strlen/*.c ./tests/ft_strcpy/*.c $(FPATH)/*.a

OBJ	=	*.o
NAME = 	tests

all: $(NAME)

$(NAME):
	gcc -g -ggdb -Wall -Werror -Wextra $(SRC) -o $(NAME)

clean: 
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all