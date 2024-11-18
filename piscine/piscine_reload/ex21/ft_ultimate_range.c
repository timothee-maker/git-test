/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnolent <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 20:47:10 by tnolent           #+#    #+#             */
/*   Updated: 2024/09/05 16:39:56 by tnolent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	i = 0;
	*range = malloc((max - min + 1) * sizeof(int));
	if (max <= min)
		range = NULL;
	if (*range == NULL)
		return (0);
	while (min < max)
	{
		(*range)[i] = min;
		min = min + 1;
		i++;
	}
	return (i);
}
/*
void	print_tab(int *tab, int size)
{
	int	i;

	i = 0;
	if (tab == NULL)
		printf("tab is null;\n");
	i = 0;
	while (i < size)
	{
		printf("%dth element: %d\n", i + 1, tab[i]);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	**tab;
	int	min;
	int	max;
	
	min = 7;
	max = 10;
	ft_ultimate_range(tab, min, max);
	print_tab(tab[0], max - min);
	printf("\n");
}*/
