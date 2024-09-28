#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
/*
int	main()
{
	char a[] = "icico";
	char b[] = "icici";
	printf("%d", ft_strcmp(a, b));
	return 0;
}*/
