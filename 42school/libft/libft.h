#ifndef __LIBFT_H__
#define __LIBFT_H__

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
char	*ft_strncat(char *s1, char *s2, unsigned int nb);
int	ft_strlen(char *str);
char	*ft_strcat(char *s1, char *s2);
char	*ft_strcpy(char *dst, char *src);
char	*ft_strdup(char *s1);
char	*ft_strncpy(char *dst, char *src, unsigned int a);
char	*ft_strnstr(char *haystack, char *needle, unsigned int size);
int	ft_strcmp(char *s1, char *s2);
int	ft_strncmp(char *s1, char *s2, unsigned int nb);
int	ft_atoi(char *str);
int	ft_isalpha(char a);
int	ft_isdigit(char c);
int	ft_isalnum(char c);
int	ft_isascii(char c);
int	ft_isprint(char c);
char	ft_toupper(char c);
char	ft_tolower(char c);
void	*ft_memset(void *tab, int c, size_t count);
void	*ft_memcpy(void *restrict dst, void *restrict src, size_t n);
void	*ft_memccpy(void *restrict dst, const void *restrict src, int c, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);

#endif
