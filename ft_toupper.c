/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfilipa- <jfilipa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 11:36:39 by jfilipa-          #+#    #+#             */
/*   Updated: 2023/11/06 18:57:02 by jfilipa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	else
		return (c);
}
/* int main(void)
{
	char    character = 'b';
	char    character1 = 'A';

	printf("%c\n", ft_toupper(character));
	printf("%c\n", ft_toupper(character1));
	return(0);
} */