/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfilipa- <jfilipa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 18:44:26 by jfilipa-          #+#    #+#             */
/*   Updated: 2023/11/06 18:47:25 by jfilipa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		count++;
	}
	return (count);
}
/* int main(void)
{   
    t_list *lst = NULL;

    t_list *new1 = ft_lstnew("Joana");
    t_list *new2 = ft_lstnew("Filipa");
    t_list *new3 = ft_lstnew("123");

    ft_lstadd_front(&lst, new2);
    ft_lstadd_front(&lst, new1);
    ft_lstadd_front(&lst, new3);

    printf("Size of list: %d\n", ft_lstsize(lst));
    return (0);
} */