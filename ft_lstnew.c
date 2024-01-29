/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfilipa- <jfilipa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 18:42:18 by jfilipa-          #+#    #+#             */
/*   Updated: 2023/11/06 18:53:05 by jfilipa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (new == NULL)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}
/* int main(void)
{
	int value = 42;
	t_list *new = ft_lstnew(&value);

	if(new == NULL)
	{
		fprintf(stderr, "Memory aloocation failed\n");
	}
	else
		printf("Content of new: %d\n", *((int *) new->content));
		free(new);
		return(0);
} */