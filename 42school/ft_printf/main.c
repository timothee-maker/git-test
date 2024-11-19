#include "include/ft_printf.h"

int	main()
{
	int	p = 23;
	int	*o = &p;
	int	t[2][4] = {{3, 7, 9, 4}, {3, 5, 7, 8}};
	char	*h[] = {"okay le sang", "shesh"};
	char	*k = "Je suis la";
	int	n = 10;
	int	*ptr = &n;

	
	// ft_printf("My printf : ptr : %p\t hexa :%x\t hexa : %x\t string : %s\t char : %c\n", k, 29, 26, "caca", 'p');
	// printf("Og printf : ptr : %p\t hexa :%x\t hexa : %x\t string : %s\t char : %c\n", k, 29, 26, "caca", 'p');
	ft_printf("My printf ptr : %%%p \t ptr : %p\n", ptr, k);
	printf("Og printf ptr : %%%p \t ptr : %p\n", ptr, k);

	return (0);
}
