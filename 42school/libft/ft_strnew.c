#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*ptr;

	ptr = (char *)malloc(sizeof(char) * size + 1);
	if (!ptr)
		return (NULL);
	ft_memset(ptr, '\0', size + 1);
	return (ptr);
}
/*
int	main()
{
	return (0);
}*/
