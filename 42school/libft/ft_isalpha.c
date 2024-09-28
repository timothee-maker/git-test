#include <stdio.h>
#include "libft.h"

int	ft_isalpha(char a)
{
	if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z'))
		return (1);
	return (0);
}
/*
int	main()
{
	char *a = "Je suis la";
	int i = 0;
	while (a[i])
	{
		if (ft_isalpha(a[i]))
			printf("%c", a[i]);
		i++;
	}
	return (0);
}*/
