#include "ft_printf.h"

void	ft_putnbrbase_fd(int nb, char *base, int fd)
{
	int	k;

	k = ft_strlen(base);
	if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
	}
	if (nb > 9)
	{
		ft_putnbrbase_fd(nb / k, base, fd);
	}
	nb = base[nb % k];
	write(fd, &nb, 1);
}

int	main()
{
	ft_putnbrbase_fd(26, "0123456789abcdef", 1);
	printf("\n");
	return (0);
}
