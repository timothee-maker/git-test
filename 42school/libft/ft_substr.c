#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*ptr;

	i = 0;
	if (!s)
		return (NULL);
	ptr = (char *)malloc(sizeof(char) * len + 1);
	if (!ptr)
		return (NULL);
	while (i < len)
	{
		ptr[i] = s[start];
		i++;
		start++;
	}
	return (ptr);
}
/*
int	main()
{
	char *str = "J esuis une fougere";
	char *ptr;
	ptr = ft_strsub(str, 9, 11);
	printf("%s\n", ptr);
	return (0);
}*/
