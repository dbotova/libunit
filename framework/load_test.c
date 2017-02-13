#include "libunit.h"

void	load_test(t_unit_test **testlist, char *test_name, test_func *p_test_func)
{
	t_unit_test *tmp;
	t_unit_test *cur;

	tmp = new_test(test_name, p_test_func);
	cur = *testlist;
	if (!cur)
		*testlist = tmp;
	else
	{
		while (cur->next)
			cur = cur->next;
		cur->next = tmp;
	}
}