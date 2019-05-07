/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcredibl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 18:36:24 by pcredibl          #+#    #+#             */
/*   Updated: 2019/04/17 21:39:35 by pcredibl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len;
	char	*s_join;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	s_join = (char*)malloc(sizeof(char) * len);
	if (s_join == NULL)
		return (NULL);
	while (*s1)
	{
		*s_join = *s1;
		s1++;
		s_join++;
	}
	while (*s2)
	{
		*s_join = *s2;
		s2++;
		s_join++;
	}
	*s_join = '\0';
	return (s_join - (len - 1));
}
