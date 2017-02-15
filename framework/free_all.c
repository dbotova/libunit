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

	cur = NULL;
	cur = *testlist;
	while(cur)
	{
		SMART_FREE(cur);
		*testlist = (*testlist)->next;
		cur = *testlist;
	}
	testlist = NULL;
}
