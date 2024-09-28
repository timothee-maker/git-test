#include "libft.h"

void	*ft_memset(void *tab, int c, size_t count)
{
	size_t	i;
	i = 0;
	if (!tab)
		return (NULL);
	while (i < count)
	{
		*(unsigned char *)(tab + i) = (unsigned char)c;
		i++;
	}
	return (tab);	
}
/*
int	main()
{
	char str[10];
	int str2[] = {10, 20, 5, 64, 432};
	char src[] = "Je suis la";
	ft_memset(str, 'a', sizeof(char) * 5);
	ft_memset(str+5, 'B', sizeof(char) * 5);	
	int	i;
	for (i = 0; i < 10; i++)
		printf("%c ", str[i]);
}*/
