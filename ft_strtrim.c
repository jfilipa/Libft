/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfilipa- <jfilipa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 12:33:43 by jfilipa-          #+#    #+#             */
/*   Updated: 2023/11/06 18:56:23 by jfilipa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_set(char const c, char const *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new;
	int		i;
	int		j;
	int		k;

	if (s1 == NULL || set == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i] && check_set(s1[i], set))
		i++;
	k = ft_strlen((char *)s1);
	while ((k > i) && check_set(s1[k - 1], set))
		k--;
	new = (char *)malloc(sizeof(char) * (k - i + 1));
	if (new == NULL)
		return (NULL);
	while (i < k)
	{
		new[j++] = s1[i++];
	}
	new[j] = '\0';
	return ((char *)new);
}
/* int main(void)
{
	char input[] = "   JoanaFilipa   ";
	char set[] = " ";

	char *result = ft_strtrim(input, set);

	if(result != NULL)
	{
		printf("Original string: \"%s\"\n", input);
		printf("String after removing whitespace: \"%s\"\n", result);
		free(result);
	}
	else
	printf("Error: Memory allocation failed.\n");
	return(0);
} */