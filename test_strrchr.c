#include <stdio.h>
#include <limits.h>
#include <ctype.h>
#include <string.h>
#include "libft.h"

void	test(const char *s, int c)
{
	printf("finding %c from %s:\n", c, s);
	printf(" fn: %p\nlib: %p\n\n", 
		ft_strrchr(s, c), strrchr(s, c));
}

int main(void)
{
	char	empty_string[] = "";
	char	string[] = "abcdefedcba";

	printf("returned addresses:\n\n");
	test(empty_string, 'b');
	test(empty_string, 0);
	test(string, 'e');
	test(string, 'x');
	test(string, 'a');
	test(string, 0);
	return(0);	
}