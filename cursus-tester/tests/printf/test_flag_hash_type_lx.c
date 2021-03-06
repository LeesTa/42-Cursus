#include "tester.h"

printftest flag_hash_type_x_tests[] = {
	{" %#x ", 1, "si", {{.i=0}}},
	{" %#x ", 1, "si", {{.i=INT_MAX}}},
	{" %#x ", 1, "si", {{.i=INT_MIN}}},
	{" %##x ", 1, "si", {{.i=8226}}},
	{" %############x ", 1, "si", {{.i=8226}}},
	{" %#x %#x %#x ", 3, "siii", {{.i=42},{.i=-42},{.i=249857}}},
	{" %#x%#x%#x ", 3, "siii", {{.i=1234567},{.i=987654},{.i=177013}}},
	{" %#x%#x%#x ", 3, "siii", {{.i=-325972},{.i=-215600}, {.i=-43534534}}},
	{" %#x %#x %#x %#x %#x %#x ", 6, "siiiiii", {{.i=-13475},{.i=2375644},{.i=-32432},{.i=INT_MAX},{.i=INT_MIN},{.i=216500}}}
};

int tests_flag_hash_type_x()
{
	return (arraysize(flag_hash_type_x_tests));
}

void	test_flag_hash_type_x(int n, bool detail)
{
	printftestcore(flag_hash_type_x_tests[n], n, detail);
}
