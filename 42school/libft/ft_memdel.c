#include "libft.h"

void	ft_memdel(void **ap)
{
	free(ap);
	ap = NULL;
}
/*
int	main()
{
	return (0);
}*/
