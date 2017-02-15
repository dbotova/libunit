/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_bigger_str_test.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbotova <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/14 19:25:21 by dbotova           #+#    #+#             */
/*   Updated: 2017/02/14 19:25:23 by dbotova          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strlen_tests.h"

int	bigger_str_test(void)
{
	char	*str;
	int		result;

	str = "hello \n my friend tu-tu-tu-tu \0 lalalal";
	result = 0;
	result = ft_strlen(str);
	if (result == 31)
		return (0);
	else
		return (-1);
}
