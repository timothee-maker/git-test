#include <stdio.h>

int main()
{
	char	c;
	char	*str = "salut\n";
	int	j;
	int	arr[2];

	c = 'a';
	j = 1;
	printf("c is: %p, str is: %p, j is: %p, arr is: %p", &c, str, &j, arr); 
}
