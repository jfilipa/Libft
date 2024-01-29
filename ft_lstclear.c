/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfilipa- <jfilipa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 18:48:11 by jfilipa-          #+#    #+#             */
/*   Updated: 2023/11/06 18:52:47 by jfilipa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;

	if (*lst == NULL || del == NULL)
		return ;
	while (*lst != NULL)
	{
		current = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = current;
	}
	*lst = NULL;
}
/* int main(void)
{
    t_list *lst = ft_lstnew(strdup("Joana"));
    t_list *new = ft_lstnew(strdup("Filipa"));

    lst->next = new;

    ft_lstclear(&lst, &free);

    if (lst == NULL)
        printf("The list is empty\n");

    return (0);
} */