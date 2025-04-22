#include <stdio.h>
#include <limits.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <strings.h>
#include "../libft.h"

int	zero_count(void *mem, size_t size)
{
	size_t i = 0;

	while (*(char *)(mem + i) == 0 && i < size )
		i++;
	return (i);
}

void	test(size_t nmemb, size_t size)
{
	char *ft_mem = ft_calloc(nmemb, size); 
	char *lib_mem = calloc(nmemb, size);
	int	ft_count = zero_count(ft_mem, size);
	int	lib_count = zero_count(lib_mem, size);

	if (!ft_mem && !lib_mem)
		printf("success (both null)\n");
	if (!!ft_mem + !!lib_mem == 1)
		printf("KO: only one null\n");
	if (ft_count == lib_count)
		printf("success (%i)\n", ft_count);
	else
		printf("KO %i\n", zero_count(ft_mem, size) - zero_count(lib_mem, size));
	free(ft_mem);
	free(lib_mem);
}

int main(void)
{
	test(1, 10);
	test(10, 10);
	test(0, 10);
	test(10, 0);
}