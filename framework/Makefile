
SRC	= launch_tests.c load_test.c new_test.c print_results.c libunit.h ft_printf.h

OBJ	= launch_tests.o load_test.o new_test.o print_results.o
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