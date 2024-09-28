int ft_count_if(char **tab, int(*f)(char*));

int ft_count_if(char **tab, int(*f)(char*))
{
	int	i;
	int	result;
	i = 0;
	result = 0;
	while (tab[i])
	{
		result += (*f)(tab[i]);
		i++;
	}
	return (result);
}


