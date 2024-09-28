#include "libft.h"
#include <stdio.h>
#include <ctype.h>

char	ft_toupper(char c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}
/*
int	main()
{
	char *s2= "Je suis ici et Toi";
	char *s1= "Je suis ici et Toi";
	int	i;
	
	while (s1[i])
	{
		toupper(s1[i]);
		printf("%c", s1[i]);
		i++;
	}
	i = 0;
	while (s2[i])
	{
		printf("%c", ft_toupper(s2[i]));
		i++;
	}
	printf("%c", toupper('a'));

}*/
