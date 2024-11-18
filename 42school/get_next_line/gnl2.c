#include "get_next_line.h"

char	*read_file(int fd, char *buffer);
char	*free_stash(char *stash, char *buffer);
char	*keep_line(char *stash);
char	*clean_stash(char *stash);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strchr(const char *s, int c);
int    ft_strlen(char *str);
void	*ft_memcpy(void *dest, const void *src, size_t n);

//	retourne la ligne avec le \n
char	*get_next_line(int fd)
{
	static char	*stash = NULL;
	static int k = 0;
	char		*line;

	k++;
	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0)
		return (NULL);
	stash = read_file(fd, stash);
	line = keep_line(stash);
	stash = clean_stash(stash);
	return (line);
}
// nettoie la stash
char	*clean_stash(char *stash)
{
	int		i;
	int		j;
	char	*last_stash;

	i = 0;
	j = 0;
	if (stash == NULL)
		return (stash);
	while (stash[i] && stash[i] != '\n')
		i++;
	if (i == ft_strlen(stash))
	{
	//	free(stash);
		return (NULL);
	}
		// i = 0;
	while (stash[i + j])
		j++;
	last_stash = (char *)calloc(sizeof(char), j);
	memcpy(last_stash, &stash[i + 1], j - 1);
	last_stash[j] = '\0';
	free(stash);
	stash = NULL;
	return (last_stash);
}
// garde la ligne a return
char	*keep_line(char *stash)
{
	int		i;
	int		j;
	char	*line;
	
	i = 0;
	j = 0;
	if (stash == NULL)
		return (stash);
	if (!ft_strchr(stash, '\n'))
		return (stash);
	while (stash[i] != '\n')
		i++;
	i++;
	line = (char *)calloc(sizeof(char), i);
	if (!line)
		return (NULL);
	while (i > j)
	{
		line[j] = stash[j];
		j++;
	}
	line[j] ='\0';
	return (line);
}
// retourne tout les buffers
char	*read_file(int fd, char *stash)
{
	int		bytes;
	char buffer[BUFFER_SIZE + 1];

	if (stash == NULL)
		stash = calloc(sizeof(char), BUFFER_SIZE + 1);
	if (!stash)
		return (NULL);
	bytes = 1;
	while (bytes > 0 && !ft_strchr(stash, '\n'))
	{
		bytes = read(fd, buffer, BUFFER_SIZE);
		if (bytes < BUFFER_SIZE && bytes != 0)
			buffer[bytes] = '\0';
		if (bytes == 0)
		{
			free(stash);
			stash = NULL;
			break;
		}
		stash = free_stash(stash, buffer);
		// printf("[%s]\n", stash);
		if (ft_strchr(stash, '\n') || bytes < BUFFER_SIZE)
			break ;
	}
	return (stash);
}
// free l'ancienne stash et return la nouvelle qui rajoute le buffer
char	*free_stash(char *stash, char *buffer)
{
	char	*new_stash;
	new_stash = ft_strjoin(stash, buffer);
	free(stash);
	stash = NULL;
	return (new_stash);
}


int	main(void)
{
	int		fd;
	char	*buffer;

	fd = open("text.txt", O_RDONLY);
	if (fd == -1)
		return (0);
	for (int i = 0; i < 8; i++)
	{
		buffer = get_next_line(fd);
		printf("%s", buffer);
		free(buffer);
	}
	close(fd);
	return (0);
}
char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	int		length;
	char	*ptr;

	length = ft_strlen((char *)s1) + ft_strlen((char *)s2);
	i = 0;
	j = 0;
	if (!(s1 || s2))
		return (NULL);
	ptr = (char *)malloc(sizeof(char) * length + 1);
	if (!ptr)
		return (NULL);
	while (s1[i])
	{
		ptr[i] = s1[i];
		i++;
	}
	while (s2[j])
		ptr[i++] = s2[j++];
	ptr[i] = '\0';
	return (ptr);
}

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == (char)c)
		return ((char *)&s[i]);
	return (NULL);
}

int    ft_strlen(char *str)
 {
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
 }

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*(unsigned char *)(dest + i) = *(unsigned char *)(src + i);
		i++;
	}
	return (dest);
}
