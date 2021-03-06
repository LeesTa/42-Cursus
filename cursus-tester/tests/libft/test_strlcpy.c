#include "tester.h"

typedef struct s_case{
	char *str;
	int len;	
} t_case;

t_case strlcpy_tests[] = {
	{"test", 20},
	{"", 20},
	{"1234567890", 5},
	{"abcdefghijk0123456789", 20},
	{"abcdefghijk0123456789", 0}
};

int tests_strlcpy()
{
	return (arraysize(strlcpy_tests));
}

bool exists_strlcpy()
{
	return (ft_strlcpy != NULL);
}

void	test_strlcpy(int n, bool detail)
{
	bool pass = true;
	t_case test = strlcpy_tests[n];
	char *dst1 = malloc(sizeof(char) * 20);
	char *dst2 = malloc(sizeof(char) * 20);
	memset(dst1, '\0', 20);
	memset(dst2, '\0', 20);
	memset(dst1, 'a', 10);
	memset(dst2, 'a', 10);
	if (detail) testinfo("vsi", n + 1, dst1, 20, test.str, test.len);
	int result = ft_strlcpy(dst1, test.str, test.len);
	int expected = strlcpy(dst2, test.str, test.len);
	if (result != expected || memcmp(dst1, dst2, 20) != 0)pass = false;
	if (detail) resultinfo("*i*v","return: ", result, " - mem", dst1, 20,"return: ", expected, " - mem", dst2, 20);
	free(dst1);
	free(dst2);
	if (pass)setgrade(PASS);
}
