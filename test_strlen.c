#include <stdio.h>
#include <limits.h>
#include <string.h>
#include <ctype.h>
#include "libft.h"

void	test(char *c)
{
	if (ft_strlen(c) == strlen(c))
	{
		printf("%s success\n", c);
	}
	else
	{
		printf("%s FAILED :(%lu\n", c, ft_strlen(c));
	}
}

int main(void)
{
	test("");
	test("asd");
	test("asdf fdsafdas ");
	test("");
	return(0);	
}