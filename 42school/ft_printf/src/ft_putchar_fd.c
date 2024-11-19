/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnolent <tnolent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 17:09:13 by tnolent           #+#    #+#             */
/*   Updated: 2024/11/19 17:09:14 by tnolent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
int	main()
{
	FILE* fichier = NULL;

	fichier = fopen("test.txt", "w");

	if (fichier != NULL)
	{
		ft_putchar_fd('A', 4); // Écriture du caractère A
		fclose(fichier);
	}

	return 0;
}*/
