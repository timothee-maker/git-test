#include "ft.h"
#include <stdio.h>

int	main(void)
{
	int	a = 5;
	int	b = 10;
	int	*c = &a;
	int	*d = &b;
	ft_swap(c, d);
	printf("%d\n%d", a, b);
}
