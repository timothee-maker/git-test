#include "libft.h"

char	*ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	i;

	i = 0;
	while (src[i] && dstsize > i + 1)
	{
		*(char *)(dst + i) = *(char *)(src + i);
		i++;
	}
	dst[i] = '\0';
	return ((char *)dst);
}
/*
int	main()
{
	char	s1[] = "Le caca est cuit";
	char	s2[100];
	ft_strlcpy(s2, s1, 11);
	//strlcpy(s2, s1, 11);
	printf("%s\n", s2);
	return (0);
}*/
