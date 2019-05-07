/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcredibl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 17:26:47 by pcredibl          #+#    #+#             */
/*   Updated: 2019/04/18 19:06:09 by pcredibl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	unsigned int	i;

	if (ft_strlen(s2) == 0)
		return ((char*)s1);
	i = 0;
	while (*s1)
	{
		if (*s2 == '\0')
			return ((char*)(s1 - i));
		if (*s1 != *s2)
		{
			s2 = s2 - i;
			s1 = s1 - i;
			i = 0;
		}
		else if (*s1 == *s2)
		{
			i++;
			s2++;
		}
		s1++;
	}
	if (*s2 == '\0')
		return ((char*)(s1 - i));
	return (NULL);
}
