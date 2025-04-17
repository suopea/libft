#include <stdio.h>
#include <limits.h>
#include <ctype.h>
#include "libft.h"

void	test(int c)
{
	if (ft_isdigit(c) == (0 != isdigit(c)))
	{
		printf("success\n");
	}
	else
	{
		printf("%c FAIL :(\n", c);
	}
}

int main(void)
{
	test('1');
	test('9');
	test('0');
	test('a');
	test('x');
	test('\n');
	test(0);
	test(1);
	return(0);	
}