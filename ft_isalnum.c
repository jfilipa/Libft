/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfilipa- <jfilipa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 11:32:36 by jfilipa-          #+#    #+#             */
/*   Updated: 2023/11/06 18:51:31 by jfilipa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 48 && c <= 57) || (c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
/* int main(void)
{
	char    num = '1';
	char    num1 = 'A';
	char    num2 = 'a';
	char    num3 = ' ';

	printf("%d\n", ft_isalnum(num));
	printf("%d\n", ft_isalnum(num1));
	printf("%d\n", ft_isalnum(num2));
	printf("%d\n", ft_isalnum(num3));
	return(0);
} */