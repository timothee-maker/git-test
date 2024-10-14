#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

size_t	ft_strlen(const char *s);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char const *s, int fd);
void	ft_putendl_fd(char const *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putnbrbase_fd(int nb, char *base, int fd);
void	ft_putunsnb_fd(unsigned int nb, int fd);
int	ft_isascii(int c);
int	check_conversion(char *str);
int	check_whitespace(char str);
void	white_space(char str);
int	print_numbers(char *str, va_list args);
int	print_char(char *str, va_list args);
int	ft_printf(char *str, ...);



#endif