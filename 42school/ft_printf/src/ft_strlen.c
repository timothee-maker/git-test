#include "ft_printf.h"

size_t	ft_strlen(char const *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}
