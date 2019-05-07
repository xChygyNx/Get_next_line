/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcredibl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 16:51:05 by pcredibl          #+#    #+#             */
/*   Updated: 2019/04/23 20:40:03 by pcredibl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*dst;
	size_t	i;

	if (size == 0)
		return (NULL);
	dst = malloc(size);
	if (dst == NULL)
		return (NULL);
	i = 0;
	ft_bzero(dst, size);
	return (dst);
}
