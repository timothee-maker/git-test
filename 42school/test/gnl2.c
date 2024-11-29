#include "get_next_line.h"

char *get_next_line(int fd)
{
    static char *buffer;
    char *line;

    if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0)
        return (NULL);
    buffer = read_file(fd, buffer);
    if (!buffer)
        return (NULL);
    line = ft_line(buffer);
    buffer = ft_next(buffer);
    return (line);
}
char *read_file(int fd, char *res)
{
    char *buffer;
    int byte_read;

    if (!res)
        res = ft_calloc(1, 1);
    buffer = ft_calloc(BUFFER_SIZE + 1, sizeof(char));
    byte_read = 1;
    while (byte_read > 0)
    {
        byte_read = read(fd, buffer, BUFFER_SIZE);
        if (byte_read == -1)
        {
            free(buffer);
            return (NULL);
        }
        buffer[byte_read] = 0;
        res = ft_free(res, buffer);
        if (ft_strchr(buffer, '\n'))
            break;
    }
    free(buffer);
    return (res);
}
char *ft_line(char *buffer)
{
    char *line;
    int i = 0;

    if (!buffer[i])
        return (NULL);
    while (buffer[i] && buffer[i] != '\n')
        i++;
    line = ft_calloc(i + 2, sizeof(char));
    i = 0;
    while (buffer[i] && buffer[i] != '\n')
    {
        line[i] = buffer[i];
        i++;
    }
    if (buffer[i] && buffer[i] == '\n')
        line[i++] = '\n';
    return (line);
}

char *ft_next(char *buffer)
{
    int i = 0, j = 0;
    char *line;

    while (buffer[i] && buffer[i] != '\n')
        i++;
    if (!buffer[i])
    {
        free(buffer);
        return (NULL);
    }
    line = ft_calloc((ft_strlen(buffer) - i + 1), sizeof(char));
    i++;
    while (buffer[i])
        line[j++] = buffer[i++];
    free(buffer);
    return (line);
}

char *ft_free(char *buffer, char *buf)
{
    char *temp;

    temp = ft_strjoin(buffer, buf);
    free(buffer);
    return (temp);
}
/*
int	main(void)
{
	int		fd;
	char	*buffer;
	int	i = 0;

	fd = open("test1.txt", O_RDONLY);
	if (fd == -1)
		return (0);
	do
	{
		buffer = get_next_line(fd);
		printf("%s", buffer);
		free(buffer);
		i++;
	} while (i <= 5);
	close(fd);
	return (0);
}*/