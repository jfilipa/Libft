/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfilipa- <jfilipa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 11:33:34 by jfilipa-          #+#    #+#             */
/*   Updated: 2023/11/06 18:59:00 by jfilipa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
/* int main(void)
{
	char	character = 'A';
	char	character1 = 128;

	printf("%d\n", ft_isascii(character));
	printf("%d\n", ft_isascii(character1));
	return(0);
} */