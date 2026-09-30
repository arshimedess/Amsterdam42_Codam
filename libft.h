/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   libft.h                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: ahossein <ahossein@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/09/30 13:51:21 by ahossein      #+#    #+#                 */
/*   Updated: 2026/09/30 19:10:16 by ahossein      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// Header guard: prevents duplicate inclusion
#ifndef LIBFT
#define LIBFT

// standard or user-defined headers, angle brackets or double quotes
#include <ctype.h>
#include <stdio.h>
#include <string.h>


// Function declaration (prototype)
int ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int ft_isprint(int c);
size_t	ft_strlen(const char *s);


#endif