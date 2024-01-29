/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfilipa- <jfilipa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 11:36:15 by jfilipa-          #+#    #+#             */
/*   Updated: 2023/11/06 18:55:34 by jfilipa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = ft_strlen(dest);
	if (size <= j)
		return ((size + ft_strlen(src)));
	while (src[i] != '\0' && (j + 1) < size)
	{
		dest[j++] = src[i++];
	}
	dest[j] = '\0';
	return (j + ft_strlen(&src[i]));
}
/* int main(void)
{
	size_t n;
	char    dest[] = "Joana";
	const char  src[] = "Filipa";

	printf("Before strlcat: %s\n", dest);
	ft_strlcat(dest, src, 15);
	printf("After strlcat: %s\n", dest);
} */