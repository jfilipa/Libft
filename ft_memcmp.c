/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfilipa- <jfilipa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 11:39:58 by jfilipa-          #+#    #+#             */
/*   Updated: 2023/11/06 18:53:38 by jfilipa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
		{
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		}
		i++;
	}
	return (0);
}
/* int main(void)
{
	char    str1[] = "Joana";
	char    str2[] = "filipa";
	size_t  n = 1;

	int result = ft_memcmp(str1, str2, n);

	printf("Comp str1 with str2: %d\n", result);

	if (result == 0)
		printf("str1 and str2 are equal\n");
	else
		printf("str1 and str2 are different\n");
	return(0);
} */