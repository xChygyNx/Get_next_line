/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcredibl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 20:31:19 by pcredibl          #+#    #+#             */
/*   Updated: 2019/04/18 19:10:02 by pcredibl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*c_s1;
	const unsigned char	*c_s2;
	size_t				i;

	c_s1 = (const unsigned char *)s1;
	c_s2 = (const unsigned char *)s2;
	if (n == 0)
		return (0);
	i = 0;
	while (c_s1[i] == c_s2[i] && i < n - 1)
		i++;
	return (c_s1[i] - c_s2[i]);
}
