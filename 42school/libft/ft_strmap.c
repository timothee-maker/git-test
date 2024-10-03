#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*ptr;

	i = 0;
	if (!(s || f))
		return (0);
	ptr = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!ptr)
		return (NULL);
	while (ptr[i])
	{
		ptr[i] = (*f)(s[i]);
		i++;
	}
	return (ptr);
}
/*
int	main()
{
	return (0);
}*/
