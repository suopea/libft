#include <stdio.h>
#include <limits.h>
#include <ctype.h>
#include "../libft.h"

void	test(int c)
{
	if (ft_isascii(c) == (0 != isascii(c)))
		printf("%c (%i) success\n", c, c);
	else
		printf("%c (%i) FAILED :(\n", c, c);
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
	test(-100);
	test('A' + 256);
	return(0);	
}