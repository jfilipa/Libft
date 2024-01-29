/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfilipa- <jfilipa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 12:32:32 by jfilipa-          #+#    #+#             */
/*   Updated: 2023/11/06 18:52:24 by jfilipa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_length(int numb)
{
	long	nb;
	int		i;

	nb = numb;
	i = 0;
	if (numb <= 0)
	{
		i++;
		numb = -numb;
	}
	while (numb > 0)
	{
		numb = numb / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	len;
	long	l;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	l = n;
	len = ft_length(l);
	str = ft_calloc(len + 1, sizeof(char));
	if (str == NULL)
		return (NULL);
	str[0] = '0';
	if (l < 0)
	{
		l *= -1;
		str[0] = '-';
	}
	len--;
	while (l > 0)
	{
		str[len] = (l % 10) + '0';
		l = l / 10;
		len--;
	}
	return (str);
}
/* int main(void)
{
	int c = -12345;

	char    *result = ft_itoa(c);

	if (result != NULL)
	{
		printf("%s", result);
		free(result);
	}
	else
	{
		printf("Erro na alocação de memória.\n");
	}
	return(0);
} */