#include "libunit.h"

t_unit_test	*new_test(char *name, test_func *p_test_func)
{
	t_unit_test *test;

	test = malloc(sizeof(t_unit_test));
	if (test)
	{
		if (name)
		{
			test->name = name;
			test->pointer = p_test_func;
			test->result = -10;
			test->pid = -1;
			test->next = NULL;
		}
		else
		{
			test->name = NULL;
			test->result = -10;
			test->pid = -1;
			test->pointer = NULL;
		}
	}
	return (test);
}