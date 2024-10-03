#include "libft.h"

void	printall(char *str);

void	*ft_memchr(const void *s, int c, size_t n)
{
	int	i;

	i = 0;
	while (n > 0)
	{
		if (*(const unsigned char *)(s + i) == (unsigned char)c)
			return ((void *)(s + i));
		i++;
	}
	return (NULL);
}
/*
int	main()
{
	char str[20] = {'l','a',' ','\0', 'p', 'l', 'a', 'g', 'e'};
	char str2[20] = {'l','a',' ','\0', 'p', 'l', 'a', 'g', 'e'};
	//char tab[100];
	//void tab2[100];
	
	//printf("%s\n", );
	//ft_memmove(tab, str, sizeof(char) * 9);
	//ft_memcpy(tab, str, sizeof(char) * 7);
	void *tab = ft_memchr(str2, 'a', sizeof(char) * 7);
	void *tab2 = memchr(str, 'a', sizeof(char) * 7);
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
