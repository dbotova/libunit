/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_results.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbotova <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/14 19:28:05 by dbotova           #+#    #+#             */
/*   Updated: 2017/02/14 19:28:07 by dbotova          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

static void	arr(char *codes[])
{
	codes[0] = "KO";
	codes[1] = "OK";
	codes[2] = "SEGV";
	codes[3] = "BUSE";
	codes[4] = "DEBUG";
}

int			print_results(t_unit_test *testlist)
{
	t_unit_test	*cur;
	int			total;
	int			passed;
	char		test_result;
	char		*codes[5];

	arr(codes);
	cur = testlist;
	total = 0;
	passed = 0;
	while (cur)
	{
		if (cur->result == 0)
			passed++;
		test_result = (char)cur->result;
		ft_printf("> %-50s ...... [%6s]\n", cur->name, codes[test_result + 1]);
		cur = cur->next;
		total++;
	}
	ft_printf("Your passed %d tests out of total %d tests\n", passed, total);
	free_all(&testlist);
	if (total == passed)
		return (0);
	else
		return (-1);
}
