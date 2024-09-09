#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int ac, char **av)
{
    int i = 0;
    int j;
    if (ac == 3)
    {
        while(av[i])
        {
            j = 0;
            while(av[i][j])
            {
                write(1, &av[i][j], 1);
                j++;
            }
            i++;
        }
    }
    return 0;
}

