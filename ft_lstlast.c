/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfilipa- <jfilipa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 18:45:15 by jfilipa-          #+#    #+#             */
/*   Updated: 2023/11/06 18:46:48 by jfilipa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next != NULL)
	{
		lst = lst->next;
	}
	return (lst);
}
/* int main(void)
{
    t_list *lst = NULL;
    t_list *new1 = ft_lstnew("Joana");
    t_list *new2 = ft_lstnew("Filipa");
    t_list *new3 = ft_lstnew("123");

    ft_lstadd_front(&lst, new3);
    ft_lstadd_front(&lst, new2);
    ft_lstadd_front(&lst, new1);

    t_list *last = ft_lstlast(lst);
    printf("The last node of the list contains: %s\n",(char *)last->content);
    return (0);
} */