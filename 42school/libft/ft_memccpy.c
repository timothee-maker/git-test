#include "libft.h"

void	printall(char *str);

void	*ft_memccpy(void *restrict dst, const void *restrict src, int c, size_t n)
{
	size_t i;

	i = 0;
	while (i < n &&	*(unsigned char *)(src + i - 1) != (unsigned char)c)
	{
		*(unsigned char*)(dst + i) = *(unsigned char*)(src + i);
		i++;
	}
	return (dst);
	
}
/*
int	main()
{
	char str[20] = {'l','a',' ','\0', 'p', 'l', 'a', 'g', 'e'};
	char tab[100];
	char tab2[100];

	ft_memccpy(tab, str, 'a', sizeof(char) * 9);
	memccpy(tab2, str, 'a', sizeof(char) * 9);
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

}
*/
