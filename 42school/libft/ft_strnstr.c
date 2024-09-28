#include "libft.h"
#include <string.h>
#include <stdio.h>

char	*ft_strnstr(char *haystack, char *needle, unsigned int size)
{
	int	i;
	int	j;

	i = 0;
	while (haystack[i] && i < size)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && (i + j) < size - 1)
		{
			j++;
			if (needle[j + 1] == '\0')
				return (&haystack[i]);
		}
		i++;
	}
	return (0);
}
/*
int	main()
{
	char	str[] = "Je suis une chaine trouvee";
	char	str2[] = "suis une";
	char	*result;
	char	*ptr;
	result = strnstr(str, str2, 10);
	ptr = ft_strnstr(str, str2, 10);	
	printf("%s\n", ptr);

	if (result != NULL) {
		printf("Sous-chaîne trouvée : %s\n", result);
	} else {
		printf("Sous-chaîne non trouvée\n");
	}

	return 0;
}
*/
