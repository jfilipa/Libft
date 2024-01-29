/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfilipa- <jfilipa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 11:33:54 by jfilipa-          #+#    #+#             */
/*   Updated: 2023/11/06 18:52:15 by jfilipa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}
/* int main(void)
{
	char    print = '2';
	char    print1 = '\t';

	printf("%d\n", ft_isprint(print));
	printf("%d\n", ft_isprint(print1));
	return(0);
} */