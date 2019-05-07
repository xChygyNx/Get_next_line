/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcredibl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 18:08:04 by pcredibl          #+#    #+#             */
/*   Updated: 2019/04/17 15:21:48 by pcredibl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	c_ch;

	c_ch = (char)c;
	i = 0;
	while (s[i] != '\0')
		++i;
	while (i >= 0)
	{
		if (s[i] == c_ch)
			return ((char*)&s[i]);
		--i;
	}
	return (NULL);
}
