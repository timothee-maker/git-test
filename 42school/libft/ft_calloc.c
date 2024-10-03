#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	if (!(size && count))
		return (NULL);
	return (ft_memset(malloc(count * size), 0, size));
}
/*
int	main()
{
	return (0);
}*/
