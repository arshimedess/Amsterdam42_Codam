/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   memset.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: ahossein <ahossein@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/09/30 19:15:17 by ahossein      #+#    #+#                 */
/*   Updated: 2026/10/01 19:31:52 by ahossein      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* concepts that are helpful to understand/write this:
void pointers
data type conversion */

void *ft_memset(void *s, int c, size_t n)
{
	unsigned char *temp_p;
	temp_p = (unsigned char *) s;
	
	while(n > 0)
	{
		temp_p[n] = c;
		n--;
	}
	return (s);
}
int main(void)
{
	char str[] = "something is in something due to something";

	printf("\nbefore ft_memset(): %s\n", str);
	printf("\nbefore memset(): %s\n", str);

	ft_memset(str + 1, '*', 4);
	memset(str + 1, '*', 4);

	printf("\nafter ft_memset(): %s\n", str);
	printf("\nafter memset(): %s\n", str);

	return (0);
}