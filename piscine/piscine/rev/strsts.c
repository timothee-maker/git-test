/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strsts.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnolent <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 10:49:01 by tnolent           #+#    #+#             */
/*   Updated: 2024/08/30 11:21:44 by tnolent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
char	*ft_strstr(char *dest, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i])
	{
		j = 0;
		while (dest [i + j] == to_find[j])
		{
			j++;
			if (to_find[j + 1] == '\0')
				return (&dest[i]);
		}
		i++;
	}
	return (0);
}

int	main()
{
	char a[] = "Je suis un caca";
	char b[] = "suj";
	printf("%s", ft_strstr(a, b));	
}
