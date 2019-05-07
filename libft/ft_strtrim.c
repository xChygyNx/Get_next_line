/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcredibl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 19:22:29 by pcredibl          #+#    #+#             */
/*   Updated: 2019/04/24 12:30:11 by pcredibl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	int		ib;
	int		ie;
	char	*s_copy;

	if (s == NULL)
		return (NULL);
	ie = ft_strlen(s) - 1;
	if (ie < 0)
		return ("\0");
	while (s[ie] == ' ' || s[ie] == '\t' || s[ie] == '\n')
		ie--;
	ib = 0;
	while (s[ib] == ' ' || s[ib] == '\t' || s[ib] == '\n')
		ib++;
	if (ib > ie)
		ie = ib - 1;
	s_copy = (char*)malloc(sizeof(char) * (ie - ib + 2));
	if (s_copy == NULL)
		return (NULL);
	i = -1;
	while (++i <= ie - ib)
		s_copy[i] = s[i + ib];
	s_copy[i] = '\0';
	return (s_copy);
}
