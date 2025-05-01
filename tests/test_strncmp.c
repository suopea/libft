#include <stdio.h>
#include <limits.h>
#include <string.h>
#include <ctype.h>
#include "../libft.h"

void	test(const char *s1, const char *s2, size_t n)
{
	printf(" n: %lu\ns1: %s\ns2: %s\n",  n, s1, s2);
	printf(" ft: %i\nlib: %i\n\n", 
		ft_strncmp(s1, s2, n), 
		strncmp(s1, s2, n));
}

int main(void)
{
	test("abcde", "abcde", 5);
	test("abcde", "abcde", 4);
	test("abcde", "abcde", 6);
	test("abXde", "abcde", 1);
	test("abXde", "abcde", 2);
	test("abXde", "abcde", 3);
	test("abXde", "abcde", 4);
	test("abcde", "abXde", 5);
	test("ab\200de", "abcde", 5);
	test("ab\200de", "ab\200de", 5);
	test("abcde", "ab\200de", 5);
	test("", "abcde", 0);
	test("abcde", "", 0);
	test("", "abcde", 4);
	test("abcde", "", 4);
	return(0);	
}