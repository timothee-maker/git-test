/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnolent <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 08:46:05 by tnolent           #+#    #+#             */
/*   Updated: 2024/08/29 09:12:53 by tnolent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef DEF_FT_BOOLEAN_H
#define DEF_FT_BOOLEAN_H

#include <unistd.h>
typedef int t_bool;

#define TRUE 1
#define FALSE 0
#define EVEN(nbr) (nbr % 2 == 0)
#define SUCCESS 0
#define t_bool int
#define ODD_MSG "I have an odd number of arguments."
#define EVEN_MSG "I have an even number of arguments."


#endif
