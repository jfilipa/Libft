/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfilipa- <jfilipa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 11:39:41 by jfilipa-          #+#    #+#             */
/*   Updated: 2023/11/06 18:53:19 by jfilipa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
		{
			return ((void *)s + i);
		}
		i++;
	}
	return (NULL);
}
/* int main(void)
{
	char    str[] = "Joana";
	char    search_char = 'a';
	size_t  n = 1;

	char    *result = ft_memchr(str, search_char, n);

	if (result != NULL)
	printf("Character '%c' found in: %ld\n", search_char, result - str);
	else
	printf("Character '%c' not found\n", search_char);
	return(0);
} */