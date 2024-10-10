#include "ft_printf.h"

int	check_conversion(char *str);
int	check_whitespace(char str);
void	white_space(char str);
int	print_numbers(char *str, va_list args);
int	print_char(char *str, va_list args);

int	ft_printf(char *str, ...)
{
	int	ptr;
	va_list	args;
	int	i;

	i = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%' & str[i + 1] == '%')
		{
			write(1, "%", 1);
			i +=2;
		}
		else if (check_conversion(&str[i]))
		{
			print_numbers(&str[i], args);
			print_char(&str[i], args);
			ptr = va_arg(args, int);
			i += 2;
		}
		else if (check_whitespace(str[i]))
		{
			white_space(str[i]);
			i++;
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

int	print_numbers(char *str, va_list args)
{
	int	p;
	int	i;
	int	buffer;

	i = 0;
	buffer = va_arg(args, uintptr_t);
	if (str[i] == '%' && (str[i + 1] == 'd' || str[i + 1] == 'i'))
		ft_putnbr_fd(buffer, 1);
	else if (str[i] == '%' && (str[i + 1] == 'x'))
		ft_putnbrbase_fd(buffer, "0123456789abcdef", 1);
	else if (str[i] == '%' && str[i + 1] == 'X')
		ft_putnbrbase_fd(buffer, "0123456789ABCDEF", 1);
	else if (str[i] == '%' && (str[i + 1] == 'p'))
	{
		write(1, "0x1", 3);
		ft_putnbrbase_fd(buffer, "0123456789abcdef", 1);
	}
	else if (str[i] == '%' && str[i + 1] == 'u')
		ft_putunsnb_fd(buffer, 1);
	else
		return (0);
	return (1);
}

int	print_char(char *str, va_list args)
{
	int	p;
	int	i;
	char	c;
	char	*string;

	i = 0;
	if (str[i] == '%' && str[i + 1] == 'c')
	{
		c = va_arg(args, int);
		ft_putchar_fd(c, 1);
	}
	else if (str[i] == '%' && str[i + 1] == 's')
	{
		string = va_arg(args, char*);
		ft_putstr_fd(string, 1);
	}
	else 
	return (0);
	return (1);
}

void	white_space(char str)
{
	if (str == '\n')
		write(1, "\n", 1);
	else if (str == '\t')
		write(1, "\t", 1);
	else if (str == '\v')
		write(1, "\v", 1);
	else if (str == '\f')
		write(1, "\f", 1);
	else if (str == '\r')
		write(1, "\r", 1);
	else if (str == '\a')
		write(1, "\a", 1);
	else if (str == '\b')
		write(1, "\b", 1);
	else if (str == '\'')
		write(1, "\'", 1);
	else if (str == '\\')
		write(1, "\\", 1);

}

int	check_whitespace(char str)
{
	if (str == '\n')
		return (1);
	else if (str == '\t')
		return (1);
	else if (str == '\v')
		return (1);
	else if (str == '\f')
		return (1);
	else if (str == '\r')
		return (1);
	else if (str == '\a')
		return (1);
	else if (str == '\b')
		return (1);
	else if (str == '\'')
		return (1);
	else if (str == '\\')
		return (1);

	else
		return (0);
}

int	check_conversion(char *str)
{
	int	i;

	i = 0;

	if (str[i] == '%' && str[i + 1] == 'd')
		return (1);
	else if (str[i] == '%' && str[i + 1] == 'x')
		return (1);
	else if (str[i] == '%' && str[i + 1] == 'i')
		return (1);
	else if (str[i] == '%' && str[i + 1] == 'u')
		return (1);
	else if (str[i] == '%' && str[i + 1] == 'X')
		return (1);			
	else if (str[i] == '%' && str[i + 1] == 'p')
		return (1);
	else if (str[i] == '%' && str[i + 1] == 's')
		return (1);
	else if (str[i] == '%' && str[i + 1] == 'c')
		return (1);
	else
		return (0);
}

int	main()
{
	int	p = 23;
	int	*o = &p;
	int	t[2][4] = {{3, 7, 9, 4}, {3, 5, 7, 8}};
	char	*h[] = {"okay le sang", "shesh"};
	char	*k = "Je suis la";

	printf("%%%p\n%x%x%s%c\n", k, 29, 26, "caca", 'p');
	ft_printf("%%%p\n%x%x%s%c",k , 29, 26, "caca", 'p');
	printf("\n");
	return (0);
}



