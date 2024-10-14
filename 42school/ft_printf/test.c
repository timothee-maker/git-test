#include <stdarg.h>
#include <stdio.h>

void	print(char *str, ...)
{
	va_list args;
	int	i;
	int	c;

	va_start(args, str);
	i = 0;
	while (str[i])
	{
		c = va_arg(args, int);
		printf("%c", c);
		i++;
	}
	va_end(args);
}

int	main()
{
	char	*str = "Je suis ALAWARBAR";
	print("123", 'a', 'a', 'b');
}
