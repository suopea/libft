#include <stdio.h>
#include <limits.h>
#include <ctype.h>
#include <string.h>
#include "../libft.h"

void	test(int c)
{
	if (ft_toupper(c) == toupper(c))
	{
		printf("%c (%i)\t-->  %c (%i)\n", c, c, toupper(c), toupper(c));
	}
	else
	{
		printf("%i FAILED :(%i could be %i)\n", c, ft_toupper(c), toupper(c));
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
	return(0);	
}