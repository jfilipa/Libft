/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfilipa- <jfilipa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 11:38:40 by jfilipa-          #+#    #+#             */
/*   Updated: 2023/11/06 18:56:16 by jfilipa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = (ft_strlen(s));
	while (i >= 0)
	{
		if (s[i] == ((char)c))
		{
			return ((char *)s + i);
		}
		i--;
	}
	return (0);
}
/* int main(void)
{
	char    str[] = "Joana";
	char    search_char = 'f';

	char    *result = ft_strrchr(str, search_char);

	if (result != NULL)
	printf("Character '%c' found in: %ld\n", search_char, result - str);
	else
	printf("Character '%c' not found\n", search_char);
	return(0);
} */