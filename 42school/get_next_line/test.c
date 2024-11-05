#include "get_next_line.h"
/*
int	get_length_line(int fd)
{
	char	*str;
	int	i;

	i = 0;
	str = malloc(1);
	while (str[0] != '\n')
	{
		read(fd, str, 1);
		i++;
	}
	free(str);
	return (i);
}*/

char *get_next_line(int fd)
{
	char	*str;
	char	*result;
	int	i = 0;
	int	length;

	length = 0;
	//i = get_length_line(fd);
	//printf("%d", i);
	str = malloc(1);
	while (str[0] != '\n')
	{
		i = read(fd, str, 2);
		printf("%s", str);
		//i++;
	}
	//result[i] = '\0';
	//printf("%s", result);	
	printf("%d", i);
	return (str);
}

int	main()
{
	int	fd = open("newtex!t", O_RDONLY);
	if (fd == -1)
		return (0);
	char *buffer;
	//write (fd, "le caca est cuit", 16);
	for (int i = 0; i < 5; i++)
		buffer = get_next_line(fd);
	//printf("%s", buffer);
	close(fd);
	free (buffer);
	return (0);
}

