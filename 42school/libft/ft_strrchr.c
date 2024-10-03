#include "libft.h"

char	*ft_strrchr(const char *s, int c)
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
	printf("%s\n", ft_strrchr(str, 'suis'));
	printf("%s\n", strchr(str, 'suis'));
	printf("%s\n", strrchr(str, 'suis'));
	return (0);
}*/
