#include "ft_printf.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
int	main()
{
	FILE* fichier = NULL;

	fichier = fopen("test.txt", "w");

	if (fichier != NULL)
	{
		ft_putchar_fd('A', 4); // Écriture du caractère A
		fclose(fichier);
	}

	return 0;
}*/
