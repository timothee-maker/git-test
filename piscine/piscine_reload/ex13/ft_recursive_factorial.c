/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnolent <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 18:52:33 by tnolent           #+#    #+#             */
/*   Updated: 2024/11/05 18:52:35 by tnolent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	f;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	if (nb == 1)
		f = 1;
	else
		f = ft_recursive_factorial(nb - 1) * nb;
	return (f);
}
/*	
#include <stdlib.h>

int	main(int argc, char **argv)
{       
	argc = argc * 1;
	printf("%d", ft_recursive_factorial(atoi(argv[1])));
	return (0);
}*/
