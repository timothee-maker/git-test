#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && (s1 == s2))
	{
		s1++;
		s2++;
	}
	return (s1 - s2);
}
/*
int	main()
{
	char *a= "Je suis la";
	char *b = "Je suis la";
	printf("%d\n",ft_strcmp(a, b));
}*/
