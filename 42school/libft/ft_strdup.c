#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(char *s1)
{
	int	i;
	int	*result;

	i = 0;
	result = (char)malloc(sizeof(char) * ft_strlen(s1)i + 1);
	if (result == NULL)
		return (NULL);
	while (s1[i])
	{
		result[i] = s1[i];
		i++;
	}
	return (result);
}
