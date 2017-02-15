/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbotova <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/14 19:27:46 by dbotova           #+#    #+#             */
/*   Updated: 2017/02/14 19:27:47 by dbotova          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

void	load_test(t_unit_test **testlist, char *test_name,
	t_test_func *p_test_func)
{
	t_unit_test *tmp;
	t_unit_test *cur;

	tmp = new_test(test_name, p_test_func);
	cur = *testlist;
	if (!cur)
		*testlist = tmp;
	else
	{
		while (cur->next)
			cur = cur->next;
		cur->next = tmp;
	}
}
