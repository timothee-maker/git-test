#include <stdio.h>
#include <stdlib.h>

void	ft_swap(int *tab);
int	ft_strlen(int *tab);
void ft_putnbr(int nb);

void ft_foreach(int *tab, int length, void(*f)(int))
{
	int	i;
	i = 0;
	while (i < length)
	{
		(*f)(tab[i]);
		i++;
	}	
}
/*
void	ft_putnbr(int	nb)
{
	if (nb < 0)
	{
		printf("-");
		nb *= -1;
	}
	if (nb > 9)
		ft_putnbr(nb / 10);
	printf("%d",(nb % 10 + 0));
}

void	ft_swap(int *tab)
{
	int	inter;
	int	i;
	i = 0;
	while (i < ft_strlen(tab))
	{
		inter = tab[i];
		tab[i] = tab[ft_strlen(tab) - 1 - i];
		tab[ft_strlen(tab) - 1 - i] = inter;
		i++;
	}
}


int	ft_strlen(int *tab)
{
	int	i;
	while (tab[i++])
	{}
	return (i);
}
int	main(int ac, char **av)
{
	int	ptr[] = {10, 5, 7, 2};
	if (ac > 0)
	{
		//ft_foreach(ptr, atoi(av[2]), &ft_swap);
		printf("%d\n", ft_strlen(ptr));
		ft_foreach(ptr, atoi(av[2]), &ft_putnbr);
	}
	return 0;
}
*/
