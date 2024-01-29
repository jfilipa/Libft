/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfilipa- <jfilipa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 18:43:32 by jfilipa-          #+#    #+#             */
/*   Updated: 2023/11/06 19:51:48 by jfilipa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
/* int main(void)
{
    t_list *lst = NULL;

    t_list *new1 = ft_lstnew("Joana");
    t_list *new2 = ft_lstnew("Filipa");

    ft_lstadd_front(&lst, new2);
    ft_lstadd_front(&lst, new1);

    t_list *current = lst;
    while (current != NULL)
    {
        printf("%s\n", (char*)current->content);
        current = current->next;
    }
    return (0);
} */