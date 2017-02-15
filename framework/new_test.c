/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_test.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbotova <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/14 19:27:55 by dbotova           #+#    #+#             */
/*   Updated: 2017/02/14 19:27:59 by dbotova          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

t_unit_test	*new_test(char *name, t_test_func *p_test_func)
{
	t_unit_test *test;

	test = malloc(sizeof(t_unit_test));
	if (test)
	{
		if (name)
		{
			test->name = name;
			test->pointer = p_test_func;
			test->result = -10;
			test->pid = -1;
			test->next = NULL;
		}
		else
		{
			test->name = NULL;
			test->result = -10;
			test->pid = -1;
			test->pointer = NULL;
		}
	}
	return (test);
}
