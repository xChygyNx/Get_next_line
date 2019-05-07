/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcredibl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/16 15:17:31 by pcredibl          #+#    #+#             */
/*   Updated: 2019/04/23 20:02:10 by pcredibl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void*, size_t))
{
	t_list	*temp;

	while (*alst != NULL && del != NULL)
	{
		del((*alst)->content, (*alst)->content_size);
		temp = (*alst)->next;
		free(*alst);
		(*alst)->next = NULL;
		*alst = temp;
	}
	*alst = NULL;
}
