/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcredibl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 17:17:35 by pcredibl          #+#    #+#             */
/*   Updated: 2019/04/10 14:13:40 by pcredibl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;
	unsigned char	*s1_uc;
	unsigned char	*s2_uc;

	s1_uc = (unsigned char*)s1;
	s2_uc = (unsigned char*)s2;
	if (n <= 0)
		return (0);
	i = 0;
	while (s1_uc[i] == s2_uc[i] && i < (n - 1) && s1[i])
		++i;
	return (s1_uc[i] - s2_uc[i]);
}
