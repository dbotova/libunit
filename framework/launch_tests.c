#include "libunit.h"

int		launch_tests(t_unit_test **testlist)
{
	t_unit_test *cur;

	if (testlist)
	{
		cur = *testlist;
		while (cur)
		{
			cur->pid = fork();
			if (cur->pid < 0)
			{
				ft_printf("fork() error");
				return (-1);
			}
			if (cur->pid == 0)
			{
				//run test
			}
			else
			{
				cur = cur->next;
				wait(NULL); //research more
			}
		}
	}
	print_results(*testlist);
	return (0);
}