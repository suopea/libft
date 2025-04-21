#include <stdio.h>
#include <limits.h>
#include <ctype.h>
#include <string.h>
#include <strings.h>
#include "../libft.h"

void	memprint(char *s, size_t n)
{
	size_t i = 0;
	while (i < n)
	{
		printf("%lu", i % 10);
		i++;
	}
	printf("\n");
	i = 0;
	while (i < n + 3)
	{
		printf("%i", s[i]);
		i++;
	}
	printf("\n\n");
}

void	test(void *s, size_t n)
{
	ft_bzero(s, n); 
	// bzero(s, n);
	memprint(s, n);
	ft_strlcpy(s, "abcdefedcba", 12);
}

int main(void)
{
	char	empty_string[] = "";
	char	string[] = "abcdefedcba";

	test(empty_string, 0);
	test(empty_string, 1);
	test(empty_string, 2);
	test(empty_string, 3);
	test(string, 0);
	test(string, 1);
	test(string, 3);
	test(string, 2);
	test(string, 4);
	test(string, 5);
	test(string, 10);
	test(string, 11);
	test(string, 12);

	printf("\nexample of correct:\n123\n0001337");
	return(0);	
}