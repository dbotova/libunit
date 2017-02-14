#include "libunit.h"

static void sig_bus(int a)
{
	(void)a;
	exit (1);
}

static void sig_segv(int a)
{
	(void)a;
	exit (2);
}

int		launch_tests(t_unit_test **testlist)
{
	t_unit_test *cur;
	t_pid_list *plist;
	int tmp;

	plist = malloc(sizeof(t_pid_list));
	if (testlist)
	{
		signal(SIGSEGV, sig_segv);
		signal(SIGBUS, sig_bus);
		cur = *testlist;
		while (cur)
		{
			plist->cpid = fork();
			if (plist->cpid < 0)
				exit(1);
			if (plist->cpid == 0)
			{
				tmp = cur->pointer();
				exit(tmp);
			}
			else
			{
				cur->pid = plist->cpid;
				cur = cur->next;
			}
		}
		while ((plist->wpid = wait(&plist->status)) > 0)
		{
			cur = *testlist;
			while (cur)
			{
				if (cur->pid == plist->wpid)
					break;
				cur = cur->next;
			}
			cur->result = WEXITSTATUS(plist->status);
		}
		signal(SIGSEGV, SIG_DFL);
		signal(SIGBUS, SIG_DFL);
	}

	print_results(*testlist);
	free_all(testlist);
	SMART_FREE(plist);
	return (0);
}