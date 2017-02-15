/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbotova <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/14 19:24:51 by dbotova           #+#    #+#             */
/*   Updated: 2017/02/14 19:24:53 by dbotova          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../framework/libunit.h"
#include "ft_strlen_tests.h"

int	ft_strlen_launcher(void)
{
	t_unit_test *testlist;

	ft_printf("STRLEN:\n");
	load_test(&testlist, "Basic test for strlen", &basic_test);
	load_test(&testlist, "NULL test for strlen", &null_test);
	load_test(&testlist, "Bigger string test for strlen", &bigger_str_test);
	return (launch_tests(&testlist));
}
