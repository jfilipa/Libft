/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfilipa- <jfilipa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 11:37:25 by jfilipa-          #+#    #+#             */
/*   Updated: 2023/11/06 18:56:56 by jfilipa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	else
		return (c);
}
/* int main(void)
{
	char    character = 'b';
	char    character1 = 'A';

	printf("%c\n", ft_tolower(character));
	printf("%c\n", ft_tolower(character1));
	return(0);
} */