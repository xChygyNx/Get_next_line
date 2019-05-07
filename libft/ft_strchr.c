/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcredibl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 16:53:33 by pcredibl          #+#    #+#             */
/*   Updated: 2019/04/10 13:35:42 by pcredibl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char c_ch;

	c_ch = (char)c;
	while (*s)
	{
		if (*s == c_ch)
			return ((char*)s);
		s++;
	}
	if (c_ch == '\0')
		return ((char*)s);
	return (NULL);
}
