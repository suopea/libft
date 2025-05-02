#include <stdio.h>
#include <limits.h>
#include <ctype.h>
#include <string.h>
#include "../libft.h"

void	test(int c)
{
	if (ft_tolower(c) == tolower(c))
	{
		printf("%c success\n", c);
	}
	else
	{
		printf("%c FAILED :(%c)\n", c, ft_tolower(c));
	}
}

int main(void)
{
	test('a');
	test('b');
	test('x');
	test('z');
	test('a' - 1);
	test('z' + 1);
	test('A');
	test('B');
	test('X');
	test('Z');
	test('A' - 1);
	test('Z' + 1);
	return(0);	
	test(-100);
	test('A' + 256);
	test('8');
	test(-100);
	test(666);
	test(-1);
	test(-2);
	test(-3);
	test(-127);
	test(-128);
	test(-129);
	test(254);
	test(255);
	test(256);
	test('A' - 256);
	test('A' - 512);
	test('A' - 256 - 1);
	test('A' - 512 - 1);
	test('a' - 256);
	test('a' - 512);
	test(196);
}