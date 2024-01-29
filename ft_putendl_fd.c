/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfilipa- <jfilipa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 12:32:44 by jfilipa-          #+#    #+#             */
/*   Updated: 2023/11/06 18:54:28 by jfilipa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}
/* int main(void)
{
	int fd;
	char    str[] = "Joana";

	fd = open("test.txt", O_WRONLY);
	ft_putendl_fd(str, fd);
	close(fd);
} */
/* int main(void)
{
	int fd;
	char    str[] = "Joana";

	ft_putendl_fd(str, 1);
	return(0);
} */