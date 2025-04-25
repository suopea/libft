#include <stdio.h>
#include <limits.h>
#include <ctype.h>
#include "../libft.h"

void	test(char c, int fd)
{
	printf("\n%c: ", c);
	fflush(stdout);
	ft_putchar_fd(c, fd);
}

int main(void)
{
	test('a', 1);
	test('b', 1);
	test('A', 1);
	test('B', 1);
	test('z', 1);
	test('z' + 1, 1);
	test('Z' + 1, 1);
	test('a' - 1, 1);
	test('A' - 1, 1);
	test('1', 1);
	test('0', 1);
	/*
	test(-1, 1);
	test(255, 1);
	test(-100, 1);
	test('A' + 256, 1);
	test('0' + 256, 1);
	*/
	return(0);	
}