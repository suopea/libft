#include <stdio.h>
#include <limits.h>
#include "../libft.h"

void	every_third(unsigned int index, char *c)
{
	if (index % 3)
		*c = 'x';
}

void	edgy_case(unsigned int index, char *c)
{
	if (index % 2)
		*c = ft_toupper(*c);
}

void	test(char *fn_name, char *s, void (*f)(unsigned int, char*))
{
	printf("%s for '%s':\n", fn_name, s);
	ft_striteri(s, f);
	printf("%s\n", s);
}

int main(void)
{
	test("every_third", "0123456789", every_third);	
	test("edgy_case", "i'm like sooo random ^_^", edgy_case);
	test("edgy_case", "", edgy_case);
}