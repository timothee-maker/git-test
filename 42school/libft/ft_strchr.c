#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	return (NULL);
}
/*
int	main()
{
	char *str = "Je suis l;a";
	printf("%s", ft_strchr(str, 'suiz'));
	return (0);
}*/
