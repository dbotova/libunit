#include "libunit.h"

void	print_results(t_unit_test *testlist)
{
	const char* codes[] = 
	{
		"OK", "KO", "SEGV", "BUSE",
	};

	while(testlist)
	{
		 char test_result = (char)testlist->result;
		 //ft_printf("> %-30s ...... [%6d]\n", testlist->name, test_result);
		 ft_printf("> %-30s ...... [%6s]\n", testlist->name, codes[test_result + 1]);
		testlist = testlist->next;
	}
}