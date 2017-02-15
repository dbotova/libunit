/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_all.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbotova <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/13 15:59:22 by dbotova           #+#    #+#             */
/*   Updated: 2017/02/13 15:59:23 by dbotova          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

void	free_all(t_unit_test **testlist)
{
	t_unit_test *cur;
	t_unit_test *next;

	next = NULL;
	cur = *testlist;
	while (cur)
	{
		next = cur->next;
		SMART_FREE(cur);
		cur = next;
	}
	testlist = NULL;
}
