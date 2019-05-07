/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcredibl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 13:28:09 by pcredibl          #+#    #+#             */
/*   Updated: 2019/04/17 15:09:55 by pcredibl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, void *src, size_t n)
{
	size_t			i;
	unsigned char	*dest_ch;
	unsigned char	*src_ch;

	dest_ch = (unsigned char*)dest;
	src_ch = (unsigned char*)src;
	i = 0;
	while (i < n)
	{
		dest_ch[i] = src_ch[i];
		++i;
	}
	return (dest_ch);
}
