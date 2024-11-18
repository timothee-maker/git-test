/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnolent <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 12:38:15 by tnolent           #+#    #+#             */
/*   Updated: 2024/08/26 12:38:15 by tnolent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	while (src[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*newstr;
	int		i;

	i = 0;
	newstr = malloc(sizeof(char) * ft_strlen(src) + 1);
	while (*(src + i))
	{
		newstr[i] = src[i];
		i++;
	}
	newstr[i] = '\0';
	if (newstr == NULL)
		return (0);
	return (newstr);
}
/*
int	main()
{
	char pasloue[] = "Gamos sur les champs jl'ai pas loue";
	char *a;
	
	a = ft_strdup(pasloue);
	printf("%s", a);
	free(a);
}*/
