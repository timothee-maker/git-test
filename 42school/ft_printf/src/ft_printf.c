/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnolent <tnolent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 16:49:03 by tnolent           #+#    #+#             */
/*   Updated: 2024/11/19 16:57:34 by tnolent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_args(char c, va_list args);

int	ft_printf(char const *str, ...)
{
	int		ptr;
	int		i;
	va_list	args;

	i = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			print_args(str[i + 1], args);
			i += 2;
		}
		else if (ft_isascii(str[i]))
		{
			write(1, &str[i], 1);
			i++;
		}
		else
			i++;
	}
	va_end(args);
	return (0);
}

void	print_args(char c, va_list args)
{
	if (c == 's')
		ft_putstr_fd(va_arg(args, char *), 1);
	else if (c == 'c')
		ft_putchar_fd(va_arg(args, int), 1);
	else if (c == 'd')
		ft_putnbr_fd(va_arg(args, int), 1);
	else if (c == 'x')
		ft_putnbrbase_fd(va_arg(args, uintptr_t), "0123456789abcdef", 1);
	else if (c == 'X')
		ft_putnbrbase_fd(va_arg(args, uintptr_t), "0123456789ABCDEF", 1);
	else if (c == 'u')
		ft_putunsnb_fd(va_arg(args, int), 1);
	else if (c == 'p')
	{
		write(1, "Ox", 2);
		ft_putnbrbase_fd(va_arg(args, uintptr_t), "0123456789abcdef", 1);
	}
	else if (c == '%')
		write(1, "%", 1);
	else
		return ;
}

// int	main(void)
// {
// 	int	p = 23;
// 	int	*o = &p;
// 	int	t[2][4] = {{3, 7, 9, 4}, {3, 5, 7, 8}};
// 	char	*h[] = {"okay le sang", "shesh"};
// 	char	*k = "Je suis la";

// 	printf("%%%p\n%x%x%s%c\n", k, 29, 26, "caca", 'p');
// 	ft_printf("%%%p\n%x%x%s%c",k , 29, 26, "caca", 'p');
// 	printf("\n");
// 	return (0);
// }