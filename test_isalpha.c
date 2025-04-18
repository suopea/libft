#include <stdio.h>
#include <limits.h>
#include <ctype.h>
#include "libft.h"

void	test(int c)
{
	if (ft_isalpha(c) == (isalpha(c) != 0))
	{
		printf("%c success\n", c);
	}
	else
	{
		printf("%c FAIL :(\n", c);
	}
}

int main(void)
{
	test('a');
	test('b');
	test('A');
	test('B');
	test('z');
	test('z' + 1);
	test('Z' + 1);
	test('a' - 1);
	test('A' - 1);
	test('1');
	test('\n');
	test('\0');
	test('0');
	test(-1);
	test(255);
	test(-100);
	test('A' + 256);
	test('0' + 256);
	return(0);	
}