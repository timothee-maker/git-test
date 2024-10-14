#include "libft.h"

int	is_sep(char c, char const *set);

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		k;
	int		j;
	char	*ptr;

	i = 0;
	ptr = (char *)malloc(sizeof(char) * ft_strlen(s1) + 1);
	if (!ptr)
		return (NULL);
	while (s1[i] && is_sep(s1[i], set))
		i++;
	j = 0;
	while (s1[i])
	{
		ptr[j] = s1[i];
		i++;
		j++;
		if (is_sep(s1[i + 1], set))
		{
			k = 0;
			while (s1[i + k] != '\0')
			{
				if (is_sep(s1[i + k], set) && s1[i + k + 1] == '\0')
				{
					ptr[i + 1] = '\0';
					return (ptr);
				}
				if (!is_sep(s1[i + k], set))
					break ;
				k++;
			}
		}
	}
	ptr[i + 1] = '\0';
	return (ptr);
}

int	is_sep(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}
/*
int	main()
{
	char *str = "";
	char *set = "";
	char *ptr;
	ptr = ft_strtrim(str, set);
	printf("%s\n", ptr);
	free(ptr);
	return (0);
}*/
