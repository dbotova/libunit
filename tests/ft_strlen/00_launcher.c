#include "../../framework/libunit.h"
#include "ft_strlen.h"

int	ft_strlen_launcher(void)
{
	t_unit_test *testlist;
	ft_printf("STRLEN:\n");

	load_test(&testlist, "Basic test", &basic_test);
	load_test(&testlist, "NULL test", &null_test);
	load_test(&testlist, "Bigger string test", &bigger_str_test);
	return(launch_tests(&testlist));
}