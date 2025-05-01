#include <stdio.h>
#include <string.h>
#include "../libft.h"

void	test(char *str, size_t n, int pos)
{
	char lib_string[100];
	char ft_string[100];

	strcpy(lib_string, str);
	strcpy(ft_string, str);
	memmove(lib_string + 10 + pos, lib_string + 10, n);
	ft_memmove(ft_string + 10 + pos, ft_string + 10, n);
	
	printf("lib: %s\n ft: %s\n\n", lib_string, ft_string);
}

int	main(void)
{
	test("          lesgoooo          ", 0, 0);
	test("          lesgoooo          ", 8, -5);
	test("          lesgoooo          ", 8, 5);
	test(0, 8, 5);
}
