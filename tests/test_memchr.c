#include <stdio.h>
#include <limits.h>
#include <ctype.h>
#include <string.h>
#include "../libft.h"

void	test(const void *s, int c, size_t n)
{
	printf("finding %c, n %zu:\n", c, n);
	printf(" fn: %p\nlib: %p\n\n", 
		ft_memchr(s, c, n), memchr(s, c, n));
}

int main(void)
{
	char	empty_string[] = "";
	char	string[] = "abcdefedcba";

	printf("returned addresses:\n\n");
	test(empty_string, 'b', 100);
	test(empty_string, 0, 10);
	test(string, 'e', 10);
	test(string, 'x', 10);
	test(string, 'a', 15);
	test(string, 'a', 200);
	test(string, 200, 200);
	test(string, 300, 200);
	test(string, 'a' + 256, 10);
	test(string, 0, 15);
	return(0);	
}