#include <stdio.h>
#include <string.h>
#include "../libft.h"

void	test(char *str, size_t n)
{
	char lib_string[100];
	char ft_string[100];

	strcpy(lib_string, str);
	strcpy(ft_string, str);
	memcpy(lib_string + n + 1, lib_string, n);
	ft_memcpy(ft_string + n + 1, ft_string, n);
	
	printf("lib: %s\n ft: %s\n\n", lib_string, ft_string);
}

int	main(void)
{
	test("weeeeeeeeeeee                             ", 15);
	test("weeeeeeeeeeee                             ", 19);
	test("weeeeeeeeeeee                             ", 24);
	test("01234567890123", 0);
	test("01234567890123", 1);
	test("01234567890123", 2);
	test("01234567890123", 3);
	test("01234567890123", 4);
	test("01234567890123", 5);
}