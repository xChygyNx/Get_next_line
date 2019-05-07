/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcredibl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/13 17:54:45 by pcredibl          #+#    #+#             */
/*   Updated: 2019/04/23 20:08:41 by pcredibl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list **alst, void (*del)(void*, size_t))
{
	if (*alst != NULL && del != NULL)
	{
		del((*alst)->content, (*alst)->content_size);
		(*alst)->next = NULL;
		free(*alst);
	}
	*alst = NULL;
}
