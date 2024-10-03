#include "libft.h"
#include <string.h>
#include <stdio.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*src;

	src = (char *)haystack;
	i = 0;
	if (!needle)
		return (src);
	while (haystack[i] && i < len)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && (i + j) < len - 1)
		{
			j++;
			if (needle[j + 1] == '\0')
				return (&src[i]);
		}
		i++;
	}
	return (NULL);
}
/*
int	main()
{
	char	str[] = "Je suis une chaine trouvee";
	char	str2[] = "suis une";
	char	*result;
	char	*ptr;
	result = strnstr(str, str2, 11);
	ptr = ft_strnstr(str, str2, 11);	
	printf("%s\n", ptr);

	if (result != NULL) {
		printf("Sous-chaîne trouvée : %s\n", result);
	} else {
		printf("Sous-chaîne non trouvée\n");
	}

	return 0;
}*/
