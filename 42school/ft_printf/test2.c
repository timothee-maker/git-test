#include <stdio.h>      /* puts */
#include <stdarg.h>     /* va_list, va_start, va_arg, va_end */

void PrintLines (char* first, ...)
{
	char	*str;
	char	c;
	va_list vl;
	int	i = 0;

	va_start(vl,first);

	while (first[i]) 
	{
		if (first[i] == 's')
		{
			str = va_arg(vl, char*);
			printf("%s\n",str);
		}
		else if (first[i] == 'c')
		{
			c = va_arg(vl, int);
			printf("%c\n", c);
		}
		i++;
	}
	va_end(vl);
}

int main ()
{
	PrintLines ("ssscc","Second","Third","Fourth", 'a', 'b');
	//char
	return 0;
}    

