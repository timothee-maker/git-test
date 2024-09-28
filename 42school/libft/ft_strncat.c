#include "libft.h"

char	*ft_strncat(char *s1, char *s2, unsigned int nb)
{
	int	i;
	int	j;

	j = ft_strlen(s1);
	i = 0;
	while (s2[i] && i < a)
	{
		s1[j + i] = s2[i];
		i++;
	}
	s1[j + i] = '\0';
	return (s1);
}
