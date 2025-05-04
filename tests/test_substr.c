#include <stdio.h>
#include <limits.h>
#include <ctype.h>
#include <string.h>
#include <malloc.h>
#include "../libft.h"

void	test(char const *s, unsigned int start, size_t len)
{
	char	*out = ft_substr(s, start, len);
	printf("     size: %lu\n    start: %i\n original: '%s'\nsubstring: '%s'\n\n", len, start, s, out);
	free(out);
}

int main(void)
{
	test("0123456789", 9, 42000000);
	test("0123456789", 9, 10);
	test("0123456789", 0, 3);
	test("0123456789", 1, 3);
	test("0123456789", 2, 3);
	test("0123456789", 0, 0);
	test("0123456789", 8, 9);
	test("0123456789", 8, 10);
	test("0123456789", 8, 9);
	test("0123456789", 10, 11);
	test("0123456789", 15, 0);
	test("0123456789", 15, 5);
	test("0123456789", 8, 5);
	test("", 0, 0);
	test("", 0, 12000);
	test(0, 0, 0);
	test(0, 0, 12000);
}