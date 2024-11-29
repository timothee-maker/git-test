/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnolent <tnolent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 18:41:48 by tnolent           #+#    #+#             */
/*   Updated: 2024/11/29 12:13:24 by tnolent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*read_file(int fd, char *buffer);
char	*free_stash(char *stash, char *buffer);
char	*ft_strdup(char *s1);
char	*keep_line(char *stash);
char	*clean_stash(char *stash);

char	*get_next_line(int fd)
{
	static char	*stash = NULL;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0)
		return (NULL);
	if (!stash)
		stash = ft_calloc(1, 1);
	stash = read_file(fd, stash);
	line = keep_line(stash);
	stash = clean_stash(stash);
	return (line);
}

char	*clean_stash(char *stash)
{
	size_t	i;
	int		j;
	size_t	len;
	char	*last_stash;

	i = 0;
	j = 0;
	len = ft_strlen(stash);
	if (stash == NULL)
		return (stash);
	while (stash[i] && stash[i] != '\n')
		i++;
	if (i == len || (len == 1 && i == 0) || ((i + 1) == len))
	{
		free(stash);
		stash = NULL;
		return (stash);
	}
	while (stash[i + j])
		j++;
	last_stash = (char *)ft_calloc(sizeof(char), j + 1);
	ft_memcpy(last_stash, &stash[i + 1], j - 1);
	last_stash[j] = '\0';
	free(stash);
	return (last_stash);
}

char	*keep_line(char *stash)
{
	int		i;
	int		j;
	char	*line;

	i = 0;
	j = 0;
	if (stash == NULL)
		return (stash);
	else if (!ft_strchr(stash, '\n'))
		return (ft_strdup(stash));
	else
		while (stash[i] != '\n')
			i++;
	i++;
	line = (char *)ft_calloc(sizeof(char), i + 1);
	if (!line)
		return (NULL);
	while (i > j)
	{
		line[j] = stash[j];
		j++;
	}
	line[j] = '\0';
	return (line);
}

char	*read_file(int fd, char *stash)
{
	int		bytes;
	char	*buffer;

	buffer = (char *)ft_calloc(sizeof(char), BUFFER_SIZE + 1);
	if (!stash || !buffer)
		return (NULL);
	bytes = 1;
	while (bytes > 0 || !ft_strchr(stash, '\n'))
	{
		bytes = read(fd, buffer, BUFFER_SIZE);
		if (bytes < BUFFER_SIZE && bytes != 0)
			buffer[bytes] = '\0';
		else if (bytes == 0 && (!ft_strlen(stash)) > 0)
		{
			free(stash);
			stash = NULL;
			break ;
		}
		if (bytes != 0)
			stash = ft_strjoin(stash, buffer);
		if (ft_strchr(stash, '\n') || bytes < BUFFER_SIZE)
			break ;
	}
	return (free(buffer), stash);
}

char	*ft_strdup(char *s1)
{
	int		i;
	char	*result;

	i = 0;
	result = (char *)malloc(sizeof(char) * ft_strlen(s1) + 1);
	if (!result)
		return (NULL);
	while (s1[i])
	{
		result[i] = s1[i];
		i++;
	}
	result[i] = '\0';
	return (result);
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
	} while (i <= 33);
	// buffer = get_next_line(fd);
	// printf("%s", buffer);
	// free(buffer);
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
	if (!s1 || !s2)
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
	free((char *)s1);
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

size_t	ft_strlen(char *str)
{
	size_t	i;

	if (!str)
		return (0);
	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	i;

	i = 0;
	ptr = (void *)malloc(count * size);
	if (!ptr)
		return (NULL);
	while (i < (count * size))
	{
		*(char *)(ptr + i) = 0;
		i++;
	}
	return (ptr);
}

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dest && !src)
		return (NULL);
	while (i < n)
	{
		*(unsigned char *)(dest + i) = *(unsigned char *)(src + i);
		i++;
	}
	return (dest);
}*/