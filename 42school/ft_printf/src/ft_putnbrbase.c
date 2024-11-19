/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrbase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnolent <tnolent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 16:48:54 by tnolent           #+#    #+#             */
/*   Updated: 2024/11/19 16:48:55 by tnolent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbrbase_fd(uintptr_t nb, char *base, int fd)
{
	int	k;

	k = ft_strlen(base);
	if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
	}
	if (nb > 15)
	{
		ft_putnbrbase_fd(nb / k, base, fd);
	}
	nb = base[nb % k];
	write(fd, &nb, 1);
}

// int	main()
// {
// 	ft_putnbrbase_fd(42, "0123456789abcdef", 1);
// 	printf("%x\n", 42);
// 	printf("\n");
// 	return (0);
// }