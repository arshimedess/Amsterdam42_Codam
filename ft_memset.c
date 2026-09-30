/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ahossein <ahossein@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/09/30 19:15:17 by ahossein      #+#    #+#                 */
/*   Updated: 2026/09/30 19:31:39 by ahossein      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *memset(void *s, int c, size_t n)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		
	}
	
}
int main(void)
{
	char str[] = "something is in something due to something";

	printf("\nbefore ft_memset(): %s\n", str);
	printf("\nbefore memset(): %s\n", str);

	ft_memset();
	memset();

	printf("\nafter ft_memset(): %s\n", str);
	printf("\nafter memset(): %s\n", str);

	return (0);
}