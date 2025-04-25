#include <stdio.h>
#include <limits.h>
#include <ctype.h>
#include "../libft.h"

void	test(int n, int fd)
{
	printf("\n%i: ", n);
	fflush(stdout);
	ft_putnbr_fd(n, fd);
}

int main(void)
{
	test(0, 1);
	test(1, 1);
	test(-1, 1);
	test(-9, 1);
	test(-10, 1);
	test(-11, 1);
	test(9, 1);
	test(10, 1);
	test(11, 1);
	test(INT_MIN, 1);
	test(INT_MAX, 1);
	return(0);	
}