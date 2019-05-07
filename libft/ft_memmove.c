/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcredibl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 14:06:16 by pcredibl          #+#    #+#             */
/*   Updated: 2019/04/24 14:52:44 by pcredibl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dst_ch;
	unsigned char	*src_ch;
	size_t			i;

	if (dst == NULL && src == NULL)
		return (NULL);
	src_ch = (unsigned char*)src;
	dst_ch = (unsigned char*)dst;
	i = 0;
	if (dst <= src || dst > src + len)
		while (i < len)
		{
			dst_ch[i] = src_ch[i];
			i++;
		}
	else
	{
		i = len;
		while (--i)
			dst_ch[i] = src_ch[i];
		dst_ch[i] = src_ch[i];
	}
	return (dst);
}
