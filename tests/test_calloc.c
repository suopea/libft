#include <stdio.h>
#include <limits.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <strings.h>
#include "../libft.h"

int	zero_count(void *mem, size_t size, size_t nmemb)
{
	size_t i = 0;

	while (*(char *)(mem + i) == 0 && i < size * nmemb) 
		i++;
	return (i);
}

void	test(size_t nmemb, size_t size)
{
	char *ft_mem = ft_calloc(nmemb, size); 
	char *lib_mem = calloc(nmemb, size);
	int	ft_count;
	int	lib_count;
	if (ft_mem && lib_mem)
	{
		ft_count = zero_count(ft_mem, size, nmemb);
		lib_count = zero_count(lib_mem, size, nmemb);
	}
	printf("\nnmemb %zu, size %zu: ", nmemb, size);
	if (!ft_mem && !lib_mem)
		printf("success (both null)\n");
	else if (!!ft_mem + !!lib_mem == 1)
		printf("only one null\n  std: %p\n   ft: %p\n\n", lib_mem, ft_mem);
	else if (ft_count == lib_count)
		printf("success (%i)\n", ft_count);
	else
		printf("KO %i\n", zero_count(ft_mem, size, nmemb) - zero_count(lib_mem, size, nmemb));
	free(ft_mem);
	free(lib_mem);
}

int main(void)
{
	test(1, 10);
	test(INT_MIN, INT_MIN);
	test(100, 10);
	test(10, 10);
	test(0, 10);
	test(10, 0);
	test(-1, 1);
	test(-1, 0);
	test(0, -1);
}