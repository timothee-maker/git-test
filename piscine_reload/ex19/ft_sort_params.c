/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnolent <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 10:58:37 by tnolent           #+#    #+#             */
/*   Updated: 2024/09/01 12:10:14 by tnolent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	putchar(char c);
void	putstr(char *str);
int		ft_strcmp(char *s1, char *s2);

void	sort_params(int argc, char **argv)
{	
	char	*inter;
	int		i;
	int		j;

	i = 1;
	while (i < argc - 1)
	{	
		j = i + 1;
		while (j < argc)
		{
			if (ft_strcmp(argv[i], argv[j]) > 0)
			{
				inter = argv[i];
				argv[i] = argv[j];
				argv[j] = inter;
			}
			j++;
		}
		i++;
	}
}

void	putchar(char c)
{
	write(1, &c, 1);
}

void	putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		putchar(str[i]);
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	while ((*s1 == *s2) && *s1)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	if (argc > 1)
		sort_params(argc, argv);
	i = 1;
	while (i < argc)
	{	
		putstr(argv[i]);
		putchar('\n');
		i++;
	}
}
