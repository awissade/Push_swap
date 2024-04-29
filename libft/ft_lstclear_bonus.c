/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awissade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 18:46:56 by awissade          #+#    #+#             */
/*   Updated: 2023/11/27 18:46:57 by awissade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;
	t_list	*next_node;

	if (!lst || !del)
		return ;
	tmp = *lst;
	while (tmp != NULL)
	{
		del(tmp->content);
		next_node = tmp->next;
		free(tmp);
		tmp = next_node;
	}
	*lst = NULL;
}
