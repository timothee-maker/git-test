/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnolent <tnolent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 18:59:49 by tnolent           #+#    #+#             */
/*   Updated: 2024/11/28 11:39:10 by tnolent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

char	*clean_stash(char *stash);
char	*read_file(int fd, char *buffer);
char	*keep_line(char *stash);
char	*get_next_line(int fd);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strchr(const char *s, int c);
char	*ft_strdup(char *s1);
void	*ft_calloc(size_t count, size_t size);
void	*ft_memset(void *tab, int c, size_t count);
void	*ft_memcpy(void *dest, const void *src, size_t n);
size_t	ft_strlen(char *str);

#endif
