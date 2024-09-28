#include <stdio.h>
#include <string.h>
#include "libft.h"

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int	i;
	while (dest[i] && i < size)
		i++;
	return (i + ft_strlen(src));	
}
/*
int	main()
{
	char	*s1 = "Je suis dans la joie";
	char	*s2 = "Je suis ici";
	printf("%u\n", ft_strlcat(s1, s2, 20));
	printf("%lu\n", strlcat(s1, s2, 20));
	printf("%lu\n", strlcat(s1, s2, 0));
	printf("%d\n", ft_strlen(s1));
	printf("%d\n", ft_strlen(s2));
	printf("%s", s1);
	return (0);
}*/
