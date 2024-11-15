/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnolent <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 09:51:36 by tnolent           #+#    #+#             */
/*   Updated: 2024/08/30 10:48:43 by tnolent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
void    putstr(char *str);

int	main(int ac, char **av)
{
	if (ac < 1)
	putstr(av[ac - 1]);
		write(1, "\n", 1);
	return (0);	
}

void	putstr(char *str)
{
	int     i;

	i = 0;
	while (str[i])
                i++;
	write(1, str, i);
}

