#include <stdio.h>
#include <string.h>
#include <bsd/string.h>
#include "../libft.h"

void	test(const char *src, size_t size, char *dst)
{
	char	lib_dest[16];
	char	ft_dest[16];

	ft_strlcpy(lib_dest, dst, ft_strlen(dst) + 1);
	ft_strlcpy(ft_dest, dst, ft_strlen(dst) + 1);
	size_t lib_size = strlcat(lib_dest, src, size);
	size_t ft_size = ft_strlcat(ft_dest, src, size);

	if (lib_size != ft_size || strcmp(lib_dest, ft_dest))
		printf("\n'%s' <-- '%s', %zu: KO\n  lib: '%s', %zu\n   ft: '%s', %zu\n\n", 
			dst, src, size, lib_dest, lib_size, ft_dest, ft_size);
	else
		printf("'%s' <-- '%s', %zu: success\n", 
			dst, src, size);
		// printf("'%s' <-- '%s', %zu: success\n\nlib: '%s', %zu\n ft: '%s', %zu\n\n\n", 
		//	dst, src, size, lib_dest, lib_size, ft_dest, ft_size);
}

int	main(void)
{
	test("", 0, "");	
	test("", 1, "");	
	test("", 2, "");	
	test("", 0, "");	
	test("", 1, "o");	
	test("", 2, "o");	
	test("123", 0, "");	
	test("123", 1, "");	
	test("123", 2, "");	
	test("123", 3, "");	
	test("123", 4, "");	
	test("123", 5, "");	
	test("123", 6, "");	
	test("123", 0, "o");	
	test("123", 1, "o");	
	test("123", 2, "o");	
	test("123", 3, "o");	
	test("123", 4, "o");	
	test("123", 5, "o");	
	test("123", 6, "o");	
	test("123", 0, "orig");	
	test("123", 1, "orig");	
	test("123", 2, "orig");	
	test("123", 3, "orig");	
	test("123", 4, "orig");	
	test("123", 5, "orig");	
	test("123", 6, "orig");	
	test("123", 7, "orig");	
	test("123", 8, "orig");	
	test("1234567890", 9, "orig");	
	test("1234567890", 10, "orig");	
	test("1234567890", 11, "orig");	
	// test("buffer smaller than size", 17, "orig");	
	// test("buffer smaller than size", 42, "orig");	

	printf("\n\ndest size is 10\n");
}