#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = (void *)malloc(count * size);
	if (!ptr)
		return (NULL);
	return (ft_memset(ptr, 0, size));
}
/*
int    main()
{
	char    *ptr;
	int    i;

	i = 0;
	ptr = ft_calloc(6, sizeof(char));
	//ptr = calloc(6, sizeof(char));
	//ptr = malloc(sizeof(char) * 6);
	if (!ptr)
		return (0);
	while (i < 5)
	{
		ptr[i] = 'J';
		printf("%c\n", ptr[i]);
		i++;
	}
	ptr[i] = '\0';
	free(ptr);
	return (0);
}*/
