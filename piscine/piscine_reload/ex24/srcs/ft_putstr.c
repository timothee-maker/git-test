#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;
	i = 0;
	while (str[i++])
		write (1, &str[i -1], 1);
}
/*
int	main()
{
	char a[] = "Je suis ici";
	ft_putstr(a);
}*/
