#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void    ft_putchar(int nbr)
{
    write(1, &nbr, 1);
}

void    ft_punbr(int nbr)
{
    if (nbr > 9)
        ft_punbr(nbr / 10);
    ft_putchar(nbr % 10 + 48);
}

int main(int argc, char **argv)
{
    // int i = 42;
    ft_punbr(i);
    if (argc == 2)
        ft_punbr(atoi(argv[1]));
    write(1, "\n", 1);
    return 0;
}

