#include "get_next_line.h"

char	*keep_line(char *stash);
int		check_stash(char *stash);
char	*clean_stash(char *stash);


//	retourne la ligne avec le \n
char	*get_next_line(int fd)
{
	int			nb_char;
	static char *stash = NULL;
	char	buff[BUFFER_SIZE + 1];
	char	*line;

	//printf("%s", stash);
	line = NULL;
	if (stash == NULL)
		stash = (char *)malloc(sizeof(char) * (100));
	if (!stash)	
		return (NULL);
	//printf("%d%s\n", tour, stash);
	nb_char = -1;
	while (nb_char != 0)
	{
		nb_char = read(fd, buff, BUFFER_SIZE);
		strcat(stash, buff);
		// printf("%s\n", stash);
		if (check_stash(stash))
		{
			line = keep_line(stash);
			stash = clean_stash(stash);
			// printf("%s\n", stash);
			//printf("%s\n", line);
			return (line);
		}
	}
	free(stash);
	return (line);
}
//	retourne la reserve avec dans l'ancienne ligne
// char	*clean_stash(char *stash)
// {
// 	int	i;

// 	i = 0;
// 	while (stash[i] != '\n')
// 		i++;
// 	// printf("2[%s]\n", &stash[i + 1]);
// 	return (&stash[i + 1]);
// }
char	*clean_stash(char *stash)
{
	int	i;
	char	*tmp;

	i = 0;
	while (stash[i] != '\n')
		i++;
	// tmp = calloc(sizeof(char), strlen(stash));
	// memcpy(tmp, stash + i, sizeof(char) * i);
	// strcpy(tmp, &stash[i + 1]);
	// printf("2[%s]\n", tmp);
	// free(stash);
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
	for (int i = 0; i < 4; i++)
	{
		buffer = get_next_line(fd);
		printf("%s", buffer);
		free(buffer);
	}
	//printf("%s", buffer);
	
	close(fd);
	return (0);
}
