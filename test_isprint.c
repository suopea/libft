#include <stdio.h>
#include <limits.h>
#include <ctype.h>
#include "libft.h"

void	test(int c)
{
	if (ft_isprint(c) == (0 != isprint(c)))
	{
		printf("%c success\n", c);
	}
	else
	{
		printf("%c FAILED :(\n", c);
	}
}

int main(void)
{
	test('a');
	test('x');
	test(255);
	test(0);
	test(14);
	test(128);
	test(-100);
	test('A' + 256);
	return(0);	
}