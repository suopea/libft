#include <stdio.h>
#include <limits.h>
#include <ctype.h>
#include <string.h>
#include "libft.h"

void	test(int c)
{
	if (ft_toupper(c) == toupper(c))
	{
		printf("%c success\n", c);
	}
	else
	{
		printf("%c FAILED :(%c)\n", c, ft_toupper(c));
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
	return(0);	
}