/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnolent <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 08:13:40 by tnolent           #+#    #+#             */
/*   Updated: 2024/08/30 08:37:16 by tnolent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

char	*strdup(char *src)
{
	char	*result;
	int	j;
	int	i;
	
	i = 0;
	j = 0;
	while (src[i++] != '\0')
	{
	}
	result = malloc(i);
	if (!result)
		return (NULL);
	while(j < i)
	{
		result[j] = src[i];
		j++;
	}
	return (result);
}
