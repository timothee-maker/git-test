#include <string.h>
#include "libft.h"
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;

	}
	return (s1[i] - s2[i]);
}
int	main()
{
	char	s1[] = "Je suis la plus belle caroote de la foret Okay";
	char	s2[] = "Je suis Okay";
	int	result;
	int	ptr;
	result = strcmp(s1, s2);
	ptr = ft_strcmp(s1, s2);	
	printf("%d\n", result);
	printf("%d\n", ptr);
}
