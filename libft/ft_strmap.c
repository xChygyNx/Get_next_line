/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcredibl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 20:02:10 by pcredibl          #+#    #+#             */
/*   Updated: 2019/04/24 12:18:11 by pcredibl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *src, char (*f)(char))
{
	char	*dst;
	int		len;
	int		i;

	if (src == NULL || f == NULL)
		return (NULL);
	len = ft_strlen(src);
	dst = (char*)malloc(sizeof(char) * (len + 1));
	if (dst == NULL)
		return (NULL);
	i = 0;
	while (src[i])
	{
		dst[i] = f(src[i]);
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
