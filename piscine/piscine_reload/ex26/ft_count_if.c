/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnolent <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:29:05 by tnolent           #+#    #+#             */
/*   Updated: 2024/11/06 11:29:20 by tnolent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_count_if(char **tab, int(*f)(char*));

int ft_count_if(char **tab, int(*f)(char*))
{
	int	i;
	int	result;
	i = 0;
	result = 0;
	while (tab[i])
	{
		result += (*f)(tab[i]);
		i++;
	}
	return (result);
}


