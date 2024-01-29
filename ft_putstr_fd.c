/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfilipa- <jfilipa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 12:33:08 by jfilipa-          #+#    #+#             */
/*   Updated: 2023/11/06 18:54:53 by jfilipa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		write(fd, &s[i], 1);
		i++;
	}
}
/* int main(void)
{
	int fd;
	char    str[] = "Joana";

	fd = open("test.txt", O_WRONLY);
	ft_putstr_fd(str, fd);
	close(fd);
} */
/* int main(void)
{
	int fd;
	char    str[] = "Joana";

	ft_putstr_fd(str, 1);
	return(0);
} */