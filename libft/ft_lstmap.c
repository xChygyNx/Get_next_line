/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcredibl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/16 17:13:42 by pcredibl          #+#    #+#             */
/*   Updated: 2019/04/23 20:24:10 by pcredibl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new_lst;
	t_list	*begin_lst;

	if (lst == NULL || f == NULL)
		return (NULL);
	begin_lst = f(lst);
	new_lst = begin_lst;
	while (lst->next != NULL)
	{
		new_lst->next = f(lst->next);
		new_lst = new_lst->next;
		lst = lst->next;
		if (new_lst == NULL)
		{
			page_del(&begin_lst);
			break ;
		}
	}
	return (begin_lst);
}
