/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcredibl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 18:13:04 by pcredibl          #+#    #+#             */
/*   Updated: 2019/04/17 21:37:00 by pcredibl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*s_f;
	size_t	i;

	if (s == NULL)
		return (NULL);
	s_f = (char*)malloc(sizeof(char) * (len + 1));
	if (s_f == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		s_f[i] = s[start + i];
		i++;
	}
	s_f[i] = '\0';
	return (s_f);
}
