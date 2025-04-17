#include <stdio.h>
#include <limits.h>
#include <ctype.h>
#include "libft.h"

void	test(int c)
{
	if (ft_isascii(c) == (0 != isascii(c)))
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
	test(126);
	test(127);
	test(128);
	test(129);
	test(255);
	test(-1);
	test(256);
	test(257);
	test(0);
	return(0);	
}