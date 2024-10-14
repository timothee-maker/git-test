#include "ft_printf.h"

void	ft_putnbr_fd(int nb, int fd)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 12);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
	}
	if (nb > 9)
	{
		ft_putnbr_fd(nb / 10, fd);
	}
	nb = nb % 10 + '0';
	write(fd, &nb, 1);
}
/*
int	main()
{
	int	a = -2147483648LL; 
	ft_putnbr_fd(-987441, 1);
	return (0);
}*/
