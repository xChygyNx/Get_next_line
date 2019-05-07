/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcredibl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 20:39:46 by pcredibl          #+#    #+#             */
/*   Updated: 2019/04/24 12:52:14 by pcredibl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t len)
{
	size_t	i;

	if ((s1 != NULL && s2 == NULL) || (s1 == NULL && s2 != NULL))
		return (0);
	if (s1 != NULL && s2 != NULL && len != 0)
	{
		i = 0;
		while (s1[i] == s2[i] && s1[i] && i < len - 1)
			i++;
		if (s1[i] == s2[i])
			return (1);
		return (0);
	}
	return (1);
}
