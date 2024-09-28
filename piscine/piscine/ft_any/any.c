#include <stdio.h>
int ft_any(char **tab, int(*f)(char*));

int ft_any(char **tab, int(*f)(char*))
{
	int	i;
	while (tab[i])
	{
		if ((*f)(tab[i]))
			return (0);
		i++;
	}
	return (1);
}
/*
int	isnotzero(char *str)
{
	int	i;
	while (str[i])
	{
		if (!(str[i] == '0'))
			return 1;
		i++;
	}
	return (0);
}

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		printf("%d", ft_any(av, &isnotzero));
	}
	return (0);
}*/
