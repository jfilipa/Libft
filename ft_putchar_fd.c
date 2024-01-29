/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfilipa- <jfilipa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 12:32:39 by jfilipa-          #+#    #+#             */
/*   Updated: 2023/11/06 18:54:12 by jfilipa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/* int main(void)
{
	int fd;

	fd = open("test.txt", O_WRONLY);
	ft_putchar_fd('c', fd);
	close(fd);
} */
/* int main(void)
{
	int fd;

	ft_putchar_fd('c', 1);
	return(0);
} */