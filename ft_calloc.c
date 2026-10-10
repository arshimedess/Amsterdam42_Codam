/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calloc.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ahossein <ahossein@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/10/10 14:24:49 by ahossein      #+#    #+#                 */
/*   Updated: 2026/10/10 15:44:47 by ahossein      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// calloc = malloc + fill with zeros
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*str;
	char	*random_p;

	if (nmemb == 0 || size == 0)
	{
		random_p = malloc(1);
		return (random_p);
	}
	if (__SIZE_MAX__ / size < nmemb)
		return (NULL);
	str = malloc(nmemb * size);
	if (str == NULL)
		return (NULL);
	ft_bzero(str, nmemb * size);
	return (str);
}