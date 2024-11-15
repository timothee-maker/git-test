/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnolent <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 08:56:02 by tnolent           #+#    #+#             */
/*   Updated: 2024/08/30 09:50:29 by tnolent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unisdt.h>

void	inter(char *str, char *grr)
{
	char *nodbl;
	int	i;
	int	j;
	
	i = 0;
	while (str[i])
	{
		j = i + 1;
		while (grr[j])
			if (!(grr[j] == str[i]))
				nodbl[i] = 
			j++;
	}
}

int	main(int ac, char **av)
{
		
}

