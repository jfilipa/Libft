/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfilipa- <jfilipa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 18:46:54 by jfilipa-          #+#    #+#             */
/*   Updated: 2023/11/06 17:20:11 by jfilipa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst == NULL || del == NULL)
		return ;
	del(lst->content);
	free(lst);
}
/* int main(void)
{
	t_list *lst = ft_lstnew(strdup("Joana"));
	t_list *new = ft_lstnew(strdup("Filipa"));

	lst->next = new;
	lst->next = NULL;
	ft_lstdelone(lst, &free);

	printf("The contents of the remaining node are:
		%s\n",(char *)new->content);

	free(new->content);
	free(new);

	return (0);
} */