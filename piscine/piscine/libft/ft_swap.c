#include <stdio.h>
void	ft_swap(int *a, int *b)
{
	int	buffer;
	buffer = *a;
	*a = *b;
	*b = buffer;
}
/*int	main()
{
	int	a = 5;
	int	b = 10;
	int	*c = &a;
	int	*d = &b;
	ft_swap(c, d);
	printf("%d\n%d", a, b);
}*/
