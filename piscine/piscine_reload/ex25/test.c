#include <stdio.h>

int	fonction(int a)
{return a * 3;}

int	main()
{
	int (*ptr)(int) = &fonction;
	printf("%d\n", (*ptr)(3));
	printf("%p\n", &fonction);
	printf("%p\n", fonction);	
	int p = fonction(3);
	printf("%p\n", &p);
	printf("%d\n", p);

	return 0;
}
