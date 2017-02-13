#include "libunit.h"

void	print_results(t_unit_test *testlist)
{
	while(testlist)
	{
		ft_printf("> %s ...... [%d]\n", testlist->name, testlist->result);
		testlist = testlist->next;
	}
}