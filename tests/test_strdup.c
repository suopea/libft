#include <stdio.h>
#include <string.h>
#include "../libft.h"

void	test(char *string)
{
	char	*original = string;
	char	*lib_copy = strdup(original);
	char	*ft_copy = ft_strdup(original);

	if (strcmp(lib_copy, ft_copy))
		printf("%s: KO\n", string);
	else
		printf("%s: success\n", string);
	free(lib_copy);
	free(ft_copy);
}

int	main(void)
{
	test("");	
	test("asd");	
}
