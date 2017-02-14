#include "libunit.h"

int		launch_tests(t_unit_test **testlist)
{
	t_unit_test *cur;
	pid_t cpid;
	int tmp;
	struct sigaction sig;

	if (testlist)
	{
		cur = *testlist;
		while (cur)
		{
			sigemptyset(&sig.sa_mask);          
		    sig.sa_flags = 0;                   
		    //sig.sa_handler = sig_usr; 
			cpid = fork();
			if (cpid < 0)
				exit(1);
			if (cpid == 0)
			{
				cur->pid = getpid();
				tmp = cur->pointer();
				if (tmp == 0)
					exit(SIGUSR1);
				else
					exit(SIGUSR2);
			}
			else
			{
				if (sigaction(SIGSEGV, &sig, NULL) == -1)
					cur->result = 100;
				if (sigaction(SIGBUS, &sig, NULL) == -1)
					cur->result = 200;
				if (sigaction(SIGUSER1, &sig, NULL) == -1)
					cur->result = 0;
				else
					cur->result = -1;
				cur = cur->next;
				wait(NULL); //research more
			}
		}
	}
	print_results(*testlist);
	free_all(testlist);
	return (0);
}