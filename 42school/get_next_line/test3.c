#include "get_next_line.h"


int change(int num)
{
    int  nb = 5;
    nb += num;
    return nb;
}

int main()
{
    int nb = 5;
    for (int i = 0; i < 5; i++)
    {
        nb  = change(nb);
        printf("%d\n", nb);
    }
    return (0);
}





/*
int	main()
{
	int	fd = open("text.txt", O_RDONLY);
	char *buffer;
    static char str[BUFFER_SIZE];
    char *src;
    int length;


	if (fd == -1)
		return (0);
    //str = malloc(sizeof(char) * (BUFFER_SIZE + 1));
    src = malloc(100);
	while ()
    {
        read(fd, str, BUFFER_SIZE);
        strcat(src, str);
    }
	src[BUFFER_SIZE * 3] = '\0';
	printf("%s\n okay", src);
	close(fd);
	//free (str);
    free(src);
    printf("%s", src);
	return (0);
}*/
