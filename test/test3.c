#include <stdio.h>
#include <stdarg.h>
#include <string.h>

void    print_valist(char *str, va_list args);

int    ft_printf(char *str, ...)
{
    int    ptr;
    va_list args;
    va_start(args, str);
    print_valist(str, args);
    va_end(args);
    return (0);
}

void    print_valist(char *str, va_list args)
{
    int    p;
    int    i;
    int    buffer;

    p = strlen(str);
    i = 0;
    while (str[i])
    {
        buffer = va_arg(args, int);
        if (str[i] == '\n')
        {
            printf("\n");
            i += 1;
        }
        else if(str[i] == '%' && str[i + 1] == 'd')
        {
            printf("%d", buffer);
            i += 2;
        }
        else if (str[i] == '%' && str[i + 1] == 'x')
        {
            printf("%x", buffer);
            i += 2;
        }
        else if (str[i] == '%' && str[i + 1] == 'X')
        {
            printf("%X", buffer);
            i += 2;
        }
        else if (str[i] == '%' && str[i + 1] == 'c')
        {
            printf("%c", buffer);
            i += 2;
        }
        else if (str[i] == '%' && str[i + 1] == '%')
        {
            printf("%c", buffer);
            i += 2;
        }
        else
        i++;
    }
}

int    main()
{
    int    p = 73;
    int    o = 44;
    //printf("\n%d\n%i\n", p, o);
    ft_printf("\n%d%x%x%%", p, 29, 26);
    return (0);
}
