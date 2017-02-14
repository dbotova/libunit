#include "libunit.h"

int	print_results(t_unit_test *testlist)
{
	t_unit_test *cur;
	int total;
	int passed;
	char test_result;

	const char* codes[] = 
	{"OK", "KO", "SEGV", "BUSE", "DEBUG"};
	cur = testlist;
	while(cur)
	{
		//count passed
		test_result = (char)cur->result;
		ft_printf("> %-30s ...... [%6s]\n", cur->name, codes[test_result + 1]);
		cur = cur->next;
		total++;
	}
	free_all(testlist);
	if (total == passed)
		return (0);
	else
		return (-1);
}