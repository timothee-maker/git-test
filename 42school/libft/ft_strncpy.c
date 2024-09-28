#inlcude "libft.h"

char	*ft_strncpy(char *dst, char *src, unsined int a)
{
	int	i;

	i = 0;
	while (src[i] && i < a)
	{
		dest[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
