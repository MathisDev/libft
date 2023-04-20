#include <stdio.h>
#include "libft.h"

int main()
{
	char const *s = "hello world blablabla";
	char	*res = ft_substr(s, 0, 420000);
	printf("%s\n", res);
	free(res);
}
