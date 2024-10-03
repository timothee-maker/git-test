#include "libft.h"

void	ft_putstr_fd(char *str, int fd)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(fd, &str[i], 1);
		i++;
	}
}
/*
int	main()
{
	char *str = "Je suis la";
	ft_putstr_fd(str, STDIN_FILEN0);
	return (0);
}*/
