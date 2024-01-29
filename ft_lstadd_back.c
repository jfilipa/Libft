/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 18:46:12 by jfilipa-          #+#    #+#             */
/*   Updated: 2023/11/13 15:40:04 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (lst == NULL || new == NULL)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
}
/* int main(void)
{
    t_list *lst = NULL;
    t_list *new1 = ft_lstnew("Joana");
    t_list *new2 = ft_lstnew("Filipa");
    t_list *new3 = ft_lstnew("123");

    ft_lstadd_back(&lst, new3);
    ft_lstadd_back(&lst, new2);
    ft_lstadd_back(&lst, new1);

    t_list *current = lst;
    while (current != NULL)
    {
        printf("%s\n", (char*)current->content);
        current = current->next;
    }
    return (0);
} */