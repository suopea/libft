#include <stdio.h>
#include <limits.h>
#include <ctype.h>
#include <string.h>
#include <strings.h>
#include "../libft.h"

int g_i = 0;

void	memprint(char *s, size_t n)
{
	size_t i = 0;
	i = 0;
	while (i < n + 3)
	{
		printf("%c", s[i]);
		i++;
	}
	printf("\n");
}

void	test(void *s, int c, size_t n)
{
	size_t i = 0;
	printf("\n ft: %p     %i\n", ft_memset(s, c, n), g_i);
	g_i++;
	memprint(s, n);
	while (i < n)
	{
		printf("%lu", i % 10);
		i++;
	}
	ft_strlcpy(s, "abcdefedcba", 12);
	printf("\n\nlib: %p\n", memset(s, c, n));
	memprint(s, n);
	i = 0;
	while (i < n)
	{
		printf("%lu", i % 10);
		i++;
	}
	ft_strlcpy(s, "abcdefedcba", 12);
	printf("\n\n");
}

int main(void)
{
	char	string[15] = "abcdefedcba";

	test(string, 'r', 0);
	test(string, 'r', 1);
	test(string, 'r', 2);
	test(string, 'r', 3);
	test(string, 'r', 0);
	test(string, 'r', 1);
	test(string, 'r', 3);
	test(string, 'r', 2);
	test(string, 'r', 4);
	test(string, 'r', 5);
	test(string, 255, 5);
	test(string, 257, 5);
	test(string, 'r', 10);
//	test(string, 'r', 11);
//	test(string, 'r', 12);

	printf("\nall chars above numbers should be the same\nexample of correct:\n123\nrrr1337");
	return(0);	
}