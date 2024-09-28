#include "libft.h"
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main()
{
	char	str[] = "Je suis une chaine de charactere";
	char	str2[] = "Sale gros fils de pute";
	int	i = 0;
	while (str[i])
	{
		if (isalnum(str[i]))
			printf("%c\n", str[i]);
		i++;
	}
	i = 0;
	while (str[i])
	{
		if (ft_isalnum(str[i]))
			printf("%c\n",str[i]);
		i++;
	}
	return (0);
}

