/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 11:40:24 by jfilipa-          #+#    #+#             */
/*   Updated: 2023/11/13 13:32:29 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[i] == '\0')
		return ((char *)big);
	if (little == NULL)
		return (NULL);
	while (big[i] && i < len)
	{
		j = 0;
		while ((i + j < len) && (big[i + j] == little[j]) && (big[i + j]
				&& little[j]))
			j++;
		if (little[j] == '\0')
		{
			return ((char *)(big + i));
		}
		i++;
	}
	return (NULL);
}
/* int	main(void)
{
	const char big[] = "JoanaFilipa";
	const char little[] = "Filipa";
	size_t n = 15;

	char *result = ft_strnstr(big, little, n);

	if(result)
	printf("Substring found at position: %ld\n", result - big);
	else
	printf("Substring not found\n");
	return(0);
} */