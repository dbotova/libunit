/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbotova <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/14 19:27:34 by dbotova           #+#    #+#             */
/*   Updated: 2017/02/14 19:27:36 by dbotova          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBUNIT_H
# define LIBUNIT_H
# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <sys/wait.h>
# include <signal.h>
# include "libft.h"

typedef int				t_test_func(void);

typedef	struct			s_unit_test
{
	char				*name;
	pid_t				pid;
	int					result;
	struct s_unit_test	*next;
	t_test_func			*pointer;
}						t_unit_test;

typedef	struct			s_pid_list
{
	int					wpid;
	int					status;
	t_test_func			*pointer;
}						t_pid_list;

t_unit_test				*new_test(char *name, t_test_func *p_test_func);
void					free_all(t_unit_test **testlist);
int						launch_tests(t_unit_test **testlist);
void					load_test(t_unit_test **testlist,
						char *test_name, t_test_func *p_test_func);
int						print_results(t_unit_test *testlist);
#endif
