#include "libft.h"

int	count_world(char const *str, char sep);
int	is_sep(char c, char sep);
int	size_tab(const char *str, char sep);

char	**ft_split(char const *s, char c)
{
	int	i;
	int	j;
	int	k;
	int	p;
	char	**result;

	j = count_world(s, c);
	result = (char **)malloc(sizeof(char *) * j + 1);
	i = 0;
	k = 0;
	while (s[i])
	{
		if (!is_sep(s[i], c))
		{
			p = 0;
			j = size_tab(&s[i], c);
			result[k] = (char *)malloc(sizeof(char) * j);
			while (!is_sep(s[i], c) && s[i])
			{
				result[k][p] = s[i];
				p++;
				i++;
			}
			result[k][j] = '\0';
			k++;
		}
		i++;
	}
	result[k] = 0;
	return (result);
}

int	size_tab(char const *str, char sep)
{
	int	i;

	i = 0;
	while (!is_sep(str[i], sep))
	{
		i++;
		if (is_sep(str[i], sep))
			return (i);
	}
	return (i);
}

int	is_sep(char c, char sep)
{
	if (c == sep)
		return (1);
	return (0);
}

int	count_world(char const *str, char sep)
{
	int	compteur;
	int	i;
	int	j;

	j = 0;
	i = 0;
	compteur = 1;
	while (str[i])
	{
		if (!is_sep(str[i], sep) && compteur == 1)
		{
			j++;
			compteur = 0;
		}
		else if (is_sep(str[i], sep) && compteur == 0)
			compteur = 1;
		i++;
	}
	return (j);
}
/*
void	print_tab(char	**str)
{
	int	i = 0;
	while (str[i] != 0)
	{
		printf("%s\n", str[i]);
		i++;
	}
}

int	main()
{
	char *str = "Je  suis a la plage";
	char	**ptr;
	ptr = ft_split(str, 'a');
	print_tab(ptr);
	free(ptr);
	return (0);
}*/
