/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfilipa- <jfilipa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 18:49:44 by jfilipa-          #+#    #+#             */
/*   Updated: 2023/11/06 19:03:05 by jfilipa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*current;
	t_list	*new;
	void	*content;

	current = NULL;
	while (lst != NULL)
	{
		content = f(lst->content);
		new = ft_lstnew(content);
		if (!new)
		{
			del(content);
			ft_lstclear(&current, del);
			return (NULL);
		}
		ft_lstadd_back(&current, new);
		lst = lst->next;
	}
	return (current);
}
/* void	*add_one(void *content)
{
    int	*number;

    number = (int *)content;
    *number += 1;
    return (number);
}

int main(void)
{
    t_list *lst = ft_lstnew(malloc(sizeof(int)));
    *(int *)lst->content = 1;

    t_list *new = ft_lstnew(malloc(sizeof(int)));
    *(int *)new->content = 2;

    lst->next = new;

    t_list *mapped = ft_lstmap(lst, &add_one, &free);

    ft_lstiter(mapped, &print_content);

    ft_lstclear(&lst, &free);
    ft_lstclear(&mapped, &free);

    return (0);
} */