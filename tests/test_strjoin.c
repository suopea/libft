#include <stdio.h>
#include <limits.h>
#include <ctype.h>
#include <string.h>
#include "../libft.h"

void	test(char const *s1, char const *s2)
{
	char	*out = ft_strjoin(s1, s2);
	printf("'%s' + '%s' = '%s'\n", s1, s2, out);
	free(out);
}

int main(void)
{
	test("", "");
	test("", "so");
	test("lonely", "");
	test("finally", "together");
}