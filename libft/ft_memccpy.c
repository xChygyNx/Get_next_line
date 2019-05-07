/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcredibl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 12:47:21 by pcredibl          #+#    #+#             */
/*   Updated: 2019/04/17 15:12:06 by pcredibl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, void *src, int c, size_t n)
{
	size_t					i;
	unsigned char			*dst_ch;
	unsigned const char		*src_ch;
	unsigned char			c_ch;

	c_ch = (unsigned char)c;
	dst_ch = (unsigned char*)dst;
	src_ch = (unsigned const char*)src;
	i = 0;
	while (i < n)
	{
		dst_ch[i] = src_ch[i];
		if (src_ch[i] == c_ch)
			return (dst + i + 1);
		++i;
	}
	return (NULL);
}
