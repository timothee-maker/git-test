#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char		*p1;
	const unsigned char		*p2;
	size_t					i;

	p1 = s1;
	p2 = s2;
	i = 0;
	while (*p1 && *p2 && n > i)
	{
		if (*p1 != *p2)
			return (*p1 - *p2);
		p1++;
		p2++;
		i++;
	}
	return (*p1 - *p2);
}
/*
int	main()
{
	int str[20] = {1, 4, 67}; 
	int str2[20] = {6, 4, 67};
	//printf("%d\n", strcmp(str, str2));
	printf("%d\n", memcmp(str, str2, sizeof(char) * 9));
	printf("%d\n", ft_memcmp(str, str2, sizeof(char) * 9));
	return (0);
}*/
