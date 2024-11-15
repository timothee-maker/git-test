/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnolent <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 08:27:53 by tnolent           #+#    #+#             */
/*   Updated: 2024/08/30 10:11:41 by tnolent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>
int	 *ft_range(int min, int max)
{
	int	i;
	int	*grr;

	i = 0;
	grr = malloc(max - min * sizeof(int*));
	while (1 < (max - min))
	{
		grr[i] = min;
		min += 1;
		i++;
	}
	return (grr);
}
int	main()
{
	int	*p;

	p = ft_range(6, 20);
	printf("%d", *p);
	free(p);
}

