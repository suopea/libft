#include <stdio.h>
#include <limits.h>
#include <ctype.h>
#include <string.h>
#include "../libft.h"

void	print_array(char **array)
{
	int	i = 0;
	while (array[i])
	{
		printf("%i: '%s'\n", i, array[i]);
		free(array[i]);
		i++;
	}
	printf("%i: %p\n\n", i, array[i]);
	free(array);
}

void	test(char const *s, char c)
{
	printf("'%s' delimited by '%c':\n", s, c);
	char	**array = ft_split(s, c);
	if (!array)
	{
		printf("%p\n", array);
		return;
	}
	print_array(array);
}

int main(void)
{
	test("   one    two three   ", ' ');
	test("one    two three   ", ' ');
	test("   one    two three", ' ');
	test("", '1');
	test("aaaaa", 'a');
	test("no delimiter", 'x');
	test(0, 'x');
	test(0, 0);
	test("0 as delimiter", 0);
}