#include <stdio.h>
#include <stdlib.h>

int ft_is_prime(int nb)
{
    if ((nb % ft_is_prime(nb - 1)) == 0)
        return 0;
    else
        return 1;
}
int main(int argc, char **argv)
{
    if (argc == 1)
        printf("%d", ft_is_prime(atoi(argv[1])));
    return 0;
}