#include "get_next_line.h"

char *get_buffer(int fd);
int	check_stash(char *stash);
char	*keep_line(char *stash);

 int    ft_strlen(char *str)
 {
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
 }

char *ft_strcat(char *dest, char  *src)
{
	int	i;

	i  = 0;
	while (src[i++])
		dest[ft_strlen(dest) + i] = src[i];
    dest[ft_strlen(dest) + i] ='\0';
	return (dest);
}

char	*keep_line(char *stash)
{
	int	i;
	int	j;
	char	*line;

	i = 0;
	j = 0;
	while (stash[i] != '\n')
		i++;
	line = (char *)malloc(sizeof(char) * (i + 1));
	while (i + 1 > j)
	{
		line[j] = stash[j];
		j++;
	}
	line[j + 1] = '\0';
	return (line);
}

int	check_stash(char *stash)
{
	int	i;

	i = 0;
	while (stash[i++])
		if (stash[i] == '\n')
			return (1);
	return (0);
}
 