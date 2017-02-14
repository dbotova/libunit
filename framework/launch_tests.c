#include "libunit.h"

static int check_status(int status)
{
	int result;

	result = 10;
	if (WIFSIGNALED(status))
	{
		if (WTERMSIG(status) == SIGBUS)
			result = 1;
		if (WTERMSIG(status) == SIGSEGV)
			result = 2;
	}
	else
		result = WEXITSTATUS(status);
	return (result);
}

int		launch_tests(t_unit_test **testlist)
{
	t_unit_test *cur;
	t_pid_list plist;

	cur = *testlist;
	while (cur)
	{
		if ((cur->pid = fork()) < 0)
			exit(1);
		if (cur->pid == 0)
			exit(cur->pointer());
		else
			cur = cur->next;
	}
	while ((plist.wpid = wait(&plist.status)) > 0)
	{
		cur = *testlist;
		while (cur)
		{
			if (cur->pid == plist.wpid)
				break;
			cur = cur->next;
		}
		cur->result = check_status(plist.status);
	}
	return (print_results(*testlist));
}