#include "ft_strlen_tests.h"

int null_test(void)
{
	char *str;
	int result;

	str = NULL;
	result = 0;
	result = ft_strlen(str);
	if (result == 0)
		return (0);
	else
		return (-1);
}