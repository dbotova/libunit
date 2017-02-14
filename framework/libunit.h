#ifndef LIBUNIT_H
# define LIBUNIT_H
# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <sys/wait.h>
# include <signal.h>
# include "ft_printf.h"
# define SAMRT_FREE(x) {free(x), x = NULL}

typedef int test_func(void);

typedef	struct			s_unit_test
{
	char				*name;
	pid_t				pid;
	int					result;
	struct s_unit_test	*next;
	test_func 			*pointer;
}						t_unit_test;

typedef	struct			s_pid_list
{
	int 				wpid;
	int 				status;
	test_func 			*pointer;
}						t_pid_list;

t_unit_test	*new_test(char *name, test_func *p_test_func);
void		free_all(t_unit_test **testlist);
int			launch_tests(t_unit_test **testlist);
void		load_test(t_unit_test **testlist, char *test_name, test_func *p_test_func);
int			print_results(t_unit_test *testlist);

#endif