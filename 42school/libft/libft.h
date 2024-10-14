#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <string.h>

void	ft_bzero(void *tab, size_t n);
void	*ft_memset(void *tab, int c, size_t count);
void	*ft_memcpy(void *restrict dst, void *restrict src, size_t n);
void	*ft_memccpy(void *restrict dst, const void *restrict src, int c, size_t n);
void	*ft_calloc(size_t count, size_t size);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memchr(const void *s, int c, size_t n);
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putnbrbase_fd(int nb, char *base, int fd);
void	ft_putunsnb_fd(unsigned int nb, int fd);
size_t		ft_strlcat(char *dest, char *src, unsigned int size);
int		ft_strlen(char const *str);
int		ft_strcmp(char *s1, char *s2);
int		ft_strncmp(char *s1, char *s2, unsigned int nb);
int		ft_atoi(char *str);
int		ft_isalpha(int a);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
char	*ft_strncat(char *s1, char *s2, unsigned int nb);
char	*ft_strcat(char *s1, char *s2);
char	*ft_strcpy(char *dst, char *src);
char	*ft_strdup(const char *s1);
char	*ft_strncpy(char *dst, char *src, unsigned int a);
size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const *s, char c);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	ft_toupper(int c);
char	ft_tolower(int c);

#endif
