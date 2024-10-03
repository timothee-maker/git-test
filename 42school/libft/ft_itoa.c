#include "libft.h"

char	*ft_itoa(int n)
{
	int		bn;
	int		i;
	int		j;
	int		sign;
	char	*ptr;

	sign = 0;
	bn = n;
	i = 1;
	j = 0;
	if (bn < 0)
		bn *= -1;
	while (bn >= 9)
	{
		bn = bn / 10;
		i++;
	}
	ptr = (char *)malloc(sizeof(char) * (i + 2));
	if (!ptr)
		return (NULL);
	if (n < 0)
	{
		ptr[j] = '1';
		n *= -1;
		sign = 1;
		i++;
	}
	while (i > j)
	{
		ptr[i - j - 1] = n % 10 + '0';
		n = n / 10;
		j++;
	}
	if (sign == 1)
		ptr[0] = '-';
	ptr[j] = '\0';
	return (ptr);
}
/*
int	main()
{
	char *ptr;
	ptr = ft_itoa(-1234555);
	printf("%s\n", ptr);
	free(ptr);
	return (0);
}

void	rev_str(char *str)
{
	int	i;
	int	l;
	char	buffer;
	l = ft_strlen(str);
	i = 0;
	if (str == NULL)
		return;
	while (i < l / 2)
	{
		buffer = str[i];
		str[i] = str[l - (i + 1)];
		str[l - (i + 1)] = buffer;
		i++;
	}
}
*/
