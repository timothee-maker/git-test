#include "include/ft_printf.h"

int main()
{
    int a = 9;
    int *g = &a;
    char **str = "coucou";
    ft_printf("%p\n", g);
    ft_printf("%p", &str);
    return (0);
}