#include "get_next_line.h"

int	get_length_line(int fd)
{
	char	*str;
	char	*result;
	int	i;
	int	length;

	length = 0;
	i = 0;
	str = malloc(sizeof(char) * 1);
	while (str[0] != '\n')
	{
		read(fd, str, 1);
		i++;
	}
	//result[i] = '\0';
	//printf("%s", result);	
	return (str);
}

char *get_next_line(int fd)
{
	char	*str;
	char	*result;
	int	i;
	int	length;

	length = 0;
	i = 0;
	str = malloc(sizeof(char) * 1);
	while (str[0] != '\n')
	{
		read(fd, str, 1);
		printf("%s", str);
		i++;
	}
	//result[i] = '\0';
	//printf("%s", result);	
	return (str);
}

int	main()
{
	int	fd = open("newtex!t", O_RDWR);
	if (fd == -1)
		return (0);
	≠char *buffer;
	//write (fd, "le caca est cuit", 16);
	buffer = get_next_line(fd);
	printf("%s", buffer);
	close(fd);
	free (buffer);
	return (0);
}

