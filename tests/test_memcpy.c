#include <stdio.h>
#include <string.h>
#include "../libft.h"

void	test(char *str, size_t n)
{
	char lib_string[30];
	char ft_string[30];

	ft_memset(lib_string, 'x', 30);
	ft_memset(ft_string, 'x', 30);
	//strcpy(lib_string, str);
	//strcpy(ft_string, str);
	// memcpy(lib_string, str, n);
	ft_memcpy(ft_string, str, n);
	
	printf("lib: %s\n ft: %s\n\n", lib_string, ft_string);
}

int	main(void)
{
	test(0, 0);
	test(0, 1);
	test("ABCDEFGHIJKLMNOPQRSTU", 0);
	test("ABCDEFGHIJKLMNOPQRSTU", 1);
	test("ABCDEFGHIJKLMNOPQRSTU", 2);
	test("ABCDEFGHIJKLMNOPQRSTU", 3);
	test("ABCDEFGHIJKLMNOPQRSTU", 4);
	test("ABCDEFGHIJKLMNOPQRSTU", 5);
}