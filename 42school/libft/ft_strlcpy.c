#include "libft.h"

size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	j = ft_strlen(src);
	i = 1;
	while (i < dstsize)
	{
		*(char *)(dst + i) = *(char *)(src + i);
		i++;
	}
	dst[i] = '\0';
	return (j);
}
/*
int	main()
{
	char	s1[] = "Le caca est cuitvso;kdnh;asod";
	char	s2[] = "Le caca est cuithypothequement";
	char	str1[20];
	char	str2[20];
	printf("%zu\n", ft_strlcpy(str1, s1, 7));
	printf("%lu\n", strlcpy(str2, s2, 7));
	printf("%s\n", str1);
	printf("%s\n", str2);
	return (0);
}*/
