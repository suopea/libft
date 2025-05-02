#include <stdio.h>
#include <string.h>
#include <bsd/string.h>
#include "../libft.h"

void	test(const char *src, size_t size)
{
	char	lib_copy[14] = "initial stuff";
	char	ft_copy[14] = "initial stuff";

	size_t lib_size = strlcpy(lib_copy, src, size);
	size_t ft_size = ft_strlcpy(ft_copy, src, size);
	if (lib_size != ft_size && strcmp(lib_copy, ft_copy))
		printf("\n\n'%s', size %zu: KO\n\nlib: '%s', %zu\n ft: '%s', %zu\n\n\n", 
			src, size, lib_copy, lib_size, ft_copy, ft_size);
	else
		printf("'%s', %zu: success (%zu, %zu)\nlib '%s'\n ft '%s'\n\n", 
			src, size, lib_size, ft_size, lib_copy, ft_copy);
}

int	main(void)
{
	test("asd", -1);	
	test("asd", 0);	
	test("asd", 1);	
	test("asd", 2);	
	test("asd", 3);	
	test("asd", 4);	
	test("asd", 5);	
	test("asd", 6);	
	test("asdfasdfasdf", 13);	
	test("asdfasdfasdf", 14);	
	test("asdfasdfasdf", 15);	
}