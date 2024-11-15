#ifndef GET_NEXT_LINE_H
#define GET_NEXT_LINE_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

#ifndef BUFFER_SIZE
#define BUFFER_SIZE 10
#endif

char *get_next_line(int fd);
char	*keep_line(char *stash);
int		check_stash(char *stash);
int    ft_strlen(char *str);
char *ft_strcat(char *dest, char  *src);


#endif
