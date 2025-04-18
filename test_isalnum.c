#include <stdio.h>
#include <limits.h>
#include <ctype.h>
#include "libft.h"

void	test(int c)
{
	if (ft_isalnum(c) == (0 != isalnum(c)))
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
	test('z');
	test('A');
	test('Z');
	test('b');
	test('B');
	test('0');
	test('5');
	test('9');
	test('\t');
	test(10);
	test(255);
	test(-100);
	test('A' + 256);
	test('0' + 256);
	return(0);	
}