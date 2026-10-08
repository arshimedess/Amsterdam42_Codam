/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ahossein <ahossein@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/10/07 21:03:54 by ahossein      #+#    #+#                 */
/*   Updated: 2026/10/08 17:26:10 by ahossein      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	*p;

	p = (char *)s;
	i = ft_strlen(s) + 1;
	while (i > 0)
	{
		if (s[i - 1] == (char)c)
			return (p + i);
		i--;
	}
	return (NULL);
}
// int main(void)
// {
// 	char str[] = "abcdfcefgfdg hcsdts jddg";
// 	printf("mine:::%p\n", ft_strrchr(str, '\0'));
// 	printf("org::::%p", strrchr(str, '\0'));
// 	return (0);
// }
// not sure if i get the casting for c yet.