/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbotova <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/14 19:24:58 by dbotova           #+#    #+#             */
/*   Updated: 2017/02/14 19:24:59 by dbotova          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strlen_tests.h"

int	basic_test(void)
{
	char	*str;
	int		result;

	str = "hello \n my friend";
	result = 0;
	result = ft_strlen(str);
	if (result == 17)
		return (0);
	else
		return (-1);
}
