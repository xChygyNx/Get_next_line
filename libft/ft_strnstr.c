/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcredibl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 17:48:57 by pcredibl          #+#    #+#             */
/*   Updated: 2019/04/23 12:27:11 by pcredibl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_recoil(const char **s1, const char **s2,
		size_t *j, unsigned int *i)
{
	*s1 -= *i;
	*s2 -= *i;
	*j -= *i;
	*i = 0;
}

char		*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	unsigned int	i;
	size_t			j;

	i = 0;
	j = 0;
	while (*s1 && j < len)
	{
		if (*s2 == '\0')
			return ((char*)(s1 - i));
		if (*s1 != *s2)
		{
			ft_recoil(&s1, &s2, &j, &i);
		}
		else if (*s1 == *s2)
		{
			i++;
			*s2 == '\0' ? s2 += 0 : s2++;
		}
		*s1 == '\0' ? s1 += 0 : s1++;
		j++;
	}
	if (*s2 == '\0')
		return ((char*)(s1 - i));
	return (NULL);
}
