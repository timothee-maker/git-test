#include "libft.h"

void	ft_striter(char *s, void (*f)(char *))
{
	int	i;

	i = 0;
	if (!(s || f))
		return ;
	while (s[i])
	{
		(*f)(&s[i]);
		i++;
	}
}
/*
int	main()
{
	return (0);
}*/
