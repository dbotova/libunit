/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_Null_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbotova <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/14 21:47:23 by dbotova           #+#    #+#             */
/*   Updated: 2017/02/14 21:47:25 by dbotova          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strcpy_tests.h"

int	null_cpy_test(void)
{
	char *src;
	char *dest;
	char *result;

	result = NULL;
	dest = "42";
	src = NULL;
	result = ft_strcpy(dest, src);
	if (ft_strcmp(result, "42") == 0)
		return (0);
	else
		return (-1);
}
