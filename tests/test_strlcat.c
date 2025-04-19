#include <stdio.h>
#include <string.h>
#include <bsd/string.h>
#include "../libft.h"

void	test(const char *src, size_t size)
{
	char	lib_dest[14] = "orig";
	char	ft_dest[14] = "orig";

	size_t lib_size = strlcat(lib_dest, src, size);
	size_t ft_size = ft_strlcat(ft_dest, src, size);
	if (lib_size == ft_size && strcmp(lib_dest, ft_dest))
		printf("\n%s, %zu: KO\n\nlib: '%s', %zu\n ft: '%s', %zu\n\n\n", 
			src, size, lib_dest, lib_size, ft_dest, ft_size);
	else
		printf("string: %s\n  size: %zu\nsuccess\n\n", src, size);
}

int	main(void)
{
	test("", 3);	
	test("123", 0);	
	test("123", 1);	
	test("123", 2);	
	test("123", 3);	
	test("123", 4);	
	test("123", 5);	
	test("123", 6);	
	test("1234567890", 9);	
	test("1234567890", 10);	
	test("1234567890", 11);	
	// test("asdfasdfasdf", 12);	

	printf("\n\ndest size is 10\n");
}