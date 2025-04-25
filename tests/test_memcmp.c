#include <stdio.h>
#include <limits.h>
#include <string.h>
#include <ctype.h>
#include "../libft.h"

void	test(const void *s1, const void *s2, size_t n)
{
	printf(" n: %lu\ns1: %s\ns2: %s\n",  n, (char *)s1, (char *)s2);
	printf(" ft: %i\nlib: %i\n\n", 
		ft_memcmp(s1, s2, n), 
		memcmp(s1, s2, n));
}

int main(void)
{
	test("\377bcde", "abXde", 5);
	test("abbee", "abcde", 0);
	test("abbee", "abcde", 5);
	test("abcde", "abcde", 4);
	test("abcde", "abcde", 6);
	test("abcde", "abcde", 100);
	test("abXde", "abcde", 1);
	test("abXde", "abcde", 2);
	test("abXde", "abcde", 3);
	test("abXde", "abcde", 4);
	test("abcde", "abXde", 5);
	test("", "", 10000);
	test("", "", 10000);
	test("", "", 10000);
	test("", "", 10000);
	test("", "abcde", 4);
	test("abcde", "", 4);
	return(0);	
}