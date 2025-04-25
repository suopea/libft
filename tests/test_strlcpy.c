#include <stdio.h>
#include <string.h>
#include <bsd/string.h>
#include "../libft.h"

void	test(const char *src, size_t size)
{
	char	lib_copy[14];
	char	ft_copy[14];

	size_t lib_size = strlcpy(lib_copy, src, size);
	size_t ft_size = ft_strlcpy(ft_copy, src, size);
	if (lib_size == ft_size && strcmp(lib_copy, ft_copy))
		printf("%s: KO\n\nlib: '%s', %zu\n ft: '%s', %zu\n\n", 
			src, lib_copy, lib_size, ft_copy, ft_size);
	else
		printf("string: '%s'\n  size: %zu\nsuccess\n\n", src, size);
}

int	main(void)
{
	test("", 0);	
	test("", 3);	
	test("asd", 0);	
	test("asd", 1);	
	test("asd", 2);	
	test("asd", 3);	
	test("asd", 4);	
	test("asd", 5);	
	test("asd", 6);	
	test("asdfasdfasdf", 9);	
	test("asdfasdfasdf", 10);	
	test("asdfasdfasdf", 11);	
}