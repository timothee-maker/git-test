#include <stdio.h> 
#include <stdlib.h>
#include <string.h>

int *ft_map(int *tab, int length, int(*f)(int));
void	ft_swap(int *a, int *b);

int *ft_map(int *tab, int length, int(*f)(int))
{
	int	i;
	int	*result;

	i = 0;
	result = malloc(sizeof(int) * length);
	while (i < length)
	{
		result[i] = (*f)(i);
		i++;
	}
	return (result);
}
/*
int	tab_zero(int a)
{
	a = 1;
	return a;
}
void	ft_swap(int *a, int *b)
{
	int	inter;
	inter = *a;
	*a = *b;
	*b = inter;
}

int	main(int ac, char **av)
{
	int	tab[] = {10, 5, 7, 2};
	int	*ptr;
	int	i;
	ft_swap(&ptr[1], &ptr[2]);
	ptr = ft_map(ptr, 4, &tab_zero);
	for (i = 0; i < 3; i++)
		printf("%d", ptr[i]);
	printf("%d", ptr[1]);
	//ft_map(ptr, 4, &ft_putnbr);
	return 0;
}
*/
