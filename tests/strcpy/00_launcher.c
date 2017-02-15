/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbotova <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/14 21:46:38 by dbotova           #+#    #+#             */
/*   Updated: 2017/02/14 21:46:40 by dbotova          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../framework/libunit.h"
#include "ft_strcpy_tests.h"

int	ft_strcpy_launcher(void)
{
	t_unit_test *testlist;

	ft_printf("STRCPY:\n");
	load_test(&testlist, "Basic test for strcpy", &basic_cpy_test);
	load_test(&testlist, "NULL test for strlcpy", &null_cpy_test);
	load_test(&testlist, "Destination is a constants", &const_dest_test);
	return (launch_tests(&testlist));
}
