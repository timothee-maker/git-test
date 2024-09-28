#include <stdio.h>
#include "libft.h"

int	ft_isascii(char c)
{
	if (c >= '0' && c <= '255')
		return (1);
	return (0);
}

