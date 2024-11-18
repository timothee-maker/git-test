#include "get_next_line.h"

char	*keep_line(char *stash);
int		check_stash(char *stash);
char	*clean_stash(char *stash);
char	*read_file(fd, buffer);
//	retourne la ligne avec le \n
char	*get_next_line(int fd)
{
	int			nb_char;
	static char	*stash;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0)
		return (NULL);
	stash = read_file(fd, stash);
    if (!stash)
        return (NULL);
    line = ft_line(stash);
    stash = ft_next(stash);

	return (line);
}
//	retourne la reserve avec dans l'ancienne ligne
char	*clean_stash(char *stash)
{
	int	i;

	// printf("1[%s]\n", stash);
	i = 0;
	while (stash[i] != '\n')
		i++;
	// printf("2[%s]\n", &stash[i + 1]);
	return (&stash[i + 1]);
}
//	prend la reserve et retourne la premiere ligne avec le \n
char	*keep_line(char *stash)
{
	int		i;
	int		j;
	char	*line;

	i = 0;
	j = 0;
	while (stash[i] != '\n')
		i++;
	// line = (char *)malloc(sizeof(char) * (i + 2));
	line = (char *)calloc(sizeof(char), i + 2);
	if (!line)
		return (NULL);
	while (i + 1 > j)
	{
		line[j] = stash[j];
		j++;
	}
	// printf("%d\n", j);
	line[j] = '\0';
	return (line);
}

int	check_stash(char *stash)
{
	int	i;

	i = 0;
	while (stash[i])
	{
		if (stash[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}

int	main(void)
{
	int		fd;
	char	*buffer;

	fd = open("text.txt", O_RDONLY);
	if (fd == -1)
		return (0);
	for (int i = 0; i < 9; i++)
	{
		buffer = get_next_line(fd);
		printf("%s", buffer);
		free(buffer);
	}
	// printf("%s", buffer);
	close(fd);
	return (0);
}
