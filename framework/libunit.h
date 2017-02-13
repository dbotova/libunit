#ifndef LIBUNIT_H
# define LIBUNIT_H
# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <sys/wait.h>
# include <signal.h>
# include "ft_printf.h"

typedef int test_func(void);

typedef	struct			s_unit_test
{
	char				*name;
	pid_t					pid;
	int					result;
	struct s_unit_test	*next;
	test_func 			*pointer;
}						t_unit_test;

t_unit_test	*new_test(char *name, test_func *p_test_func);
int			launch_tests(t_unit_test **testlist);
void		load_test(t_unit_test **testlist, char *test_name, test_func *p_test_func);
void		print_results(t_unit_test *testlist);

#endif