/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnolent <tnolent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 17:10:17 by tnolent           #+#    #+#             */
/*   Updated: 2024/11/19 17:10:18 by tnolent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr_fd(char *str, int fd)
{
	int	i;

	i = 0;
	if (!str)
		return ;
	while (str[i])
		i++;
	write (fd, str, i);
}
/*
int	main()
{
	char *str = "Je suis la";
	ft_putstr_fd(str, STDIN_FILEN0);
	return (0);
}*/
