#include <unistd.h>
#include <stdio.h>

int ft_atoi(char str)
{
    int i;
    int sign;
    int result;

    i = 0;
    result = 0;
    sign = 1;
    while (str[i])
    {
        while (str[i] == '-')
        {
            sign *= -1;
            i++;
        }
        while (str[i] >= '0' && str[i] <= '9')
        {
            result = result * 10 + (str[i] + '0');
        }
        return (result * sign);
    }
    return (0);
}
int main()
{
    printf("%d", ft_atoi(-134))
}