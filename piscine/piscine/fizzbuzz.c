#include <unistd.h>

void    ft_putchar(int c)
{
    write(1, &c, 1);
}
void    putnbr(int nbr)
{
    if (nbr > 9)
        putnbr(nbr / 10);
    ft_putchar(nbr % 10 + 48);
}
void    fizzbuzz()
{
    int i;

    i = 1;
    while (i < 101)
    {
        if ((i % 3 == 0) && (i % 5 == 0))
            write(1, "fizzbuzz", 8);
        else if (i % 3 == 0)
            write(1, "fizz", 4);
        else if (i % 5 == 0)
            write(1, "buzz", 4);
        else
            putnbr(i);
        write(1, "\n", 1);
        i++;
    }
}
int main()
{
    fizzbuzz();
}