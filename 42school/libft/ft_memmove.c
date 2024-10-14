#include "libft.h"

void	printall(char *str);

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*src1;
	char	*dst1;

	src1 = (char *)(src);
	dst1 = (char *)(dst);
	i = 0;
	while (i < len)
	{
		dst1[i] = src1[i];
		i++;
	}
	return ((void *)dst1);
}
/*
int	main()
{
	char str[20] = {'l','a',' ','\0', 'p', 'l', 'a', 'g', 'e'};
	char str2[20] = {'l','a',' ','\0', 'p', 'l', 'a', 'g', 'e'};
	char tab[100];
	char tab2[100];

	//printf("%s\n", );
	//ft_memmove(tab, str, sizeof(char) * 9);
	//ft_memcpy(tab, str, sizeof(char) * 7);
	ft_memmove(tab, str2, sizeof(char) * 5);
	memmove(tab2, str, sizeof(char) * 5);
	printall(tab);
	printall(tab2);
	return (0);
}

void	printall(char *str)
{
	int	i = 0;
	while (i < 9)
	{
		printf("%c", str[i]);
		i++;
	}
	printf("\n");
}*/
