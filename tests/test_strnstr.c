#include <stdio.h>
#include <limits.h>
#include <ctype.h>
#include <string.h>
#include <bsd/string.h>
#include "../libft.h"

// cc ft_strnstr.c test_strnstr.c ft_strlen.c -lbsd && ./a.out

void	test(const char *big, const char *little, size_t len)
{
	printf("finding %s from %s, len %lu:\n", little, big, len);
	printf(" fn: %p\nlib: %p\n\n", 
		ft_strnstr(big, little, len), strnstr(big, little, len));
}

int main(void)
{
	printf("returned addresses:\n\n");
	test("haystack", "needle", 20);
	test("haystack needle haystack", "needle", 8);
	test("haystack needle haystack", "needle", 13);
	test("haystack needle haystack", "needle", 14);
	test("haystack needle haystack", "needle", 15);
	test("haystack needle haystack", "needle", 16);
	test("haystack needle haystack", "ned", 20);
	test("haystack needle haystacks", "stacks", 30);
	test("", "needle", 15);
	test("haystack", "", 15);
	test("need a haystack", "needle", 20);
	return(0);	
}