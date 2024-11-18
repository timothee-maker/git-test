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

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	int		length;
	char	*ptr;

	length = ft_strlen(s1) + ft_strlen(s2);
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
