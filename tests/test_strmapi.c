#include <stdio.h>
#include <limits.h>
#include "../libft.h"

char	every_third(unsigned int index, char c)
{
	if (index % 3)
		return ('x');
	return (c);
}

char	edgy_case(unsigned int index, char c)
{
	if (index % 2)
		return (ft_toupper(c));
	return (c);
}

void	test(char *fn_name, char const *s, char (*f)(unsigned int, char))
{
	char	*result = ft_strmapi(s, f);
	printf("%s for '%s': '%s'\n", fn_name, s, result);
	free(result);
}

int main(void)
{
	test("every_third", "0123456789", every_third);	
	test("edgy_case", "i'm like sooo random ^_^", edgy_case);
	test("edgy_case", "", edgy_case);
}