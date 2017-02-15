#include "ft_strlen_tests.h"

int	basic_test(void)
{
	char *str;
	int result;

	str = "hello \n my friend";
	result = 0;
	result = ft_strlen(str);
	if (result == 17)
		return (0);
	else
		return (-1);
}