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

	
	//printf("%p\n%x%x%s%c\n", k, 29, 26, "caca", 'p');
	//ft_printf("%p\n%x%x%s%c",k , 29, 26, "caca", 'p');
	printf("\n");
	ft_printf("%p\t%p\n", ptr, k);
	printf("%p\t%p", ptr, k);

	return (0);
}
