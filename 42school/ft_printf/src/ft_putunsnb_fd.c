#include "ft_printf.h"


void	ft_putunsnb_fd(unsigned int nb, int fd)
{
	if (nb > 9)
		ft_putunsnb_fd(nb / 10, fd);
	nb = (nb % 10 + '0');
	write(fd, &nb, 1);
}
/*
int	main()
{
	ft_putunsnb_fd(-20, 1);
	return (0);
}*/
