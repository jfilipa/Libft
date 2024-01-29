/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfilipa- <jfilipa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 18:49:04 by jfilipa-          #+#    #+#             */
/*   Updated: 2023/11/06 19:01:09 by jfilipa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/* void	print_content(void *content)
{
    printf("%s\n", (char *)content);
}

int main(void)
{
    t_list *lst = ft_lstnew(strdup("Joana"));
    t_list *new = ft_lstnew(strdup("Filipa"));

    lst->next = new;


    ft_lstiter(lst, &print_content);

    ft_lstclear(&lst, &free);

    return (0);
} */