#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*result;

	i = 0;
	result = (char *)malloc(sizeof(char) * ft_strlen(s1) + 1);
	if (result == NULL)
		return (NULL);
	while (s1[i])
	{
		result[i] = s1[i];
		i++;
	}
	return (result);
}
/*
int	main()
{
	char str[] = "Je suis la";	
	char *ptr;
	ptr = ft_strdup(str);
	printf("%s", ptr);
	return (0);
}*/
