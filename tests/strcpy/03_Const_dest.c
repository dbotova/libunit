/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_Const_dest.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbotova <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/14 21:47:56 by dbotova           #+#    #+#             */
/*   Updated: 2017/02/14 21:47:57 by dbotova          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strcpy_tests.h"

int	const_dest_test(void)
{
	char *src;
	char *result;

	result = NULL;
	src = "Hello ";
	result = ft_strcpy("42", src);
	if (!result)
		return (0);
	else
		return (-1);
}
