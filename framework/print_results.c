#include "libunit.h"

int	print_results(t_unit_test *testlist)
{
	t_unit_test *cur;
	int total;
	int passed;
	char test_result;

	const char* codes[] = 
	{"KO", "OK", "SEGV", "BUSE", "DEBUG"};
	cur = testlist;
	total = 0;
	passed = 0;
	while(cur)
	{
		if (cur->result == 255)
			passed++;
		test_result = (char)cur->result;
		ft_printf("> %-50s ...... [%6s]\n", cur->name, codes[test_result + 1]);
		cur = cur->next;
		total++;
	}
	ft_printf("Your passed %d tests out of total %d tests\n", passed, total);
	free_all(&testlist);
	if (total == passed)
		return (0);
	else
		return (-1);
}