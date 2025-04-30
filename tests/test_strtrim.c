#include <stdio.h>
#include <limits.h>
#include <ctype.h>
#include <string.h>
#include "../libft.h"

void	test(char const *s1, char const *set)
{
	char	*out = ft_strtrim(s1, set);
	printf("'%s' from '%s':\n'%s'\n\n", set, s1, out);
	free(out);
}

int main(void)
{
	test("aa ", " ");
	test(" aa", " ");
	test("  remove spaces from start and end     ", " ");
	test("only remove only from beginning and end only", "lo ny");
	test("nothing to remove here", "");
	test("", "nothing");
	test("", "");
}