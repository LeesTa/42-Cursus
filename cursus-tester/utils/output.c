#include "tester.h"
#include <sys/types.h>

static char *printed = NULL;
static int printlen = 0;

static void	appendprint(const char *print, size_t len)
{
	int i = 0 , j = 0;
	char *tmp = (char *)malloc(sizeof(char) * (printlen + len + 1));
	while (i < printlen)
	{
		tmp[i] = printed[i];
		i++;
	}
	while (j < len)
	{
		tmp[i + j] = print[j];
		j++;
	}
	tmp[i + j] = '\0';
	if (printed)
		free(printed);
	printed = tmp;
}

ssize_t write(int fd, const void *buff, size_t nbyte)
{
	if (nbyte > 0) appendprint(buff, nbyte);
	printlen += nbyte;
	return (nbyte);
}

void	resetprinted()
{
	printlen = 0;
	if (!printed)
		return ;
	free(printed);
	printed = NULL;
}

char *useroutput()
{
	return (printed);
}

bool checkoutput(char *compare, int len)
{
	if (!compare) return (!printed);
	return (len == printlen &&  memcmp(compare, printed, len) == 0);
}
