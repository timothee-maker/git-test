#include <string.h>
#include "libft.h"
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int nb)
{
	unsigned int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i] && i < (nb - 1))
		i++;
	if (nb < 1)
		return (0);
	return (s1[i] - s2[i]);
}
/*
int	main()
{
	char	s1[] = "Je suis la plus belle caroote de la foret Okay";
	char	s2[] = "Je suis Okay";
	int	result;
	int	ptr;
	result = strncmp(s1, s2, 21);
	ptr = ft_strncmp(s1, s2, 21);
	printf("%d\n", result);
	printf("%d\n", ptr);
}*/
