#include "libft.h"
#include <stdio.h>

char	*ft_strcat(char *s1, char *s2)
{
	int	i;
	int	j;

	j = 0;
	while (s1[j])
		j++;
	i = 0;
	while (s2[i])
	{
		s1[j + i] = s2[i];
		i++;
	}
	s1[j + i] = '\0';
	return (s1);
}
/*
int	main()
{
	char	str[100] = "Je suis une chaine de charactere";
	char	str2[] = "C'est moi meme qui le demande";
	ft_strcat(str, str2);	
	printf("%s", ft_strcat(str, str2));
	return (0);
}*/
