/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_null_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbotova <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/14 19:25:07 by dbotova           #+#    #+#             */
/*   Updated: 2017/02/14 19:25:08 by dbotova          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strlen_tests.h"

int	null_test(void)
{
	char	*str;
	int		result;

	str = NULL;
	result = 0;
	result = ft_strlen(str);
	if (result == 0)
		return (0);
	else
		return (-1);
}
