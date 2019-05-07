/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcredibl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 16:56:48 by pcredibl          #+#    #+#             */
/*   Updated: 2019/04/10 14:21:05 by pcredibl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	int				i;
	unsigned char	*s1_uc;
	unsigned char	*s2_uc;

	s1_uc = (unsigned char*)s1;
	s2_uc = (unsigned char*)s2;
	i = 0;
	while (s1_uc[i] == s2_uc[i] && s1[i])
		i++;
	return (s1_uc[i] - s2_uc[i]);
}
