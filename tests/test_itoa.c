#include <stdio.h>
#include <limits.h>
#include "../libft.h"

void	test(int n)
{
	printf("%i: '%s'\n", n, ft_itoa(n));
}

int main(void)
{
	test(0);
	test(1);
	test(-1);
	test(9);
	test(10);
	test(11);
	test(-9);
	test(-10);
	test(-11);
	test(INT_MAX);
	test(INT_MAX - 1);
	test(INT_MIN);
	test(INT_MIN + 1);
}