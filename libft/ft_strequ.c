/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcredibl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 20:28:45 by pcredibl          #+#    #+#             */
/*   Updated: 2019/04/24 12:51:19 by pcredibl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	int		i;

	i = 0;
	if ((s1 != NULL && s2 == NULL) || (s1 == NULL && s2 != NULL))
		return (0);
	if (s1 != NULL && s2 != NULL)
	{
		while (s1[i] == s2[i] && s1[i])
			i++;
		if (s1[i] == s2[i])
			return (1);
		return (0);
	}
	return (1);
}
