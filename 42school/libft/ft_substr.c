#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*ptr;

	i = 0;
	ptr = (char *)malloc(sizeof(char) * len + 1);
	if (!ptr)
		return (NULL);
	while (i < len)
	{
		ptr[i] = s[start];
		i++;
		start++;
	}
	ptr[i] = '\0';
	return (ptr);
}
/*
int	main()
{
	char *str = "Je suis une fougere";
	char *ptr;
	char	*ptr2;
	ptr = ft_substr(str, 17, 10);
	printf("%s", ptr);
	return (0);
}*/
