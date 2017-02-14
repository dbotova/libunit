#include "libunit.h"

void	print_results(t_unit_test *testlist)
{
	while(testlist)
	{
		printf("> %s ...... [%d]\n", testlist->name, testlist->result); //chech ft_printf
		testlist = testlist->next;
	}
}