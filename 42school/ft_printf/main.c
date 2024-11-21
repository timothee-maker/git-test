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

	
	// printf("%d\n", ft_printf("My printf : ptr : %p\t hexa :%x\t hexa : %x\t string : %s\t char : %c\n", k, 29, 26, k, 'c'));
	// printf("%d\n", printf("Og printf : ptr : %p\t hexa :%x\t hexa : %x\t string : %s\t char : %c\n", k, 29, 26, k, 'c'));
	// printf("%d\n" ,ft_printf("My printf ptr : %p ptr : %p\n", 0, 0));
	// printf("%d\n" ,printf("OG printf ptr : %p ptr : %p\n", 0, 0));
	// printf("%d\n" , ft_printf("My printf ptr : %X", -1));
	// printf("%d\n" , printf("OG printf ptr : %X", -1));
	// printf("\t%d\n", printf("%d", -2147483647));
	// printf("\t%d\n", ft_printf("%d", -2147483647));
	// printf("%d", printf("NULL %s NULL", NULL));
	// printf("%d", ft_printf("NULL %s NULL", NULL));
	ft_printf("%d",ft_printf(0));
	printf("%d",printf(0));
	return (0);
}
