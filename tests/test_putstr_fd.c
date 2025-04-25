#include <stdio.h>
#include <limits.h>
#include <ctype.h>
#include "../libft.h"

void	test(char *s, int fd)
{
	printf("\n%s: ", s);
	fflush(stdout);
	ft_putstr_fd(s, fd);
}

int main(void)
{
	test("", 1);
	test("asd", 1);
	return (0);
}