/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcredibl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 20:22:22 by pcredibl          #+#    #+#             */
/*   Updated: 2019/04/24 12:18:34 by pcredibl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *src, char (*f)(unsigned int, char))
{
	char				*dst;
	int					len;
	unsigned int		i;

	if (src == NULL || f == NULL)
		return (NULL);
	len = ft_strlen(src);
	dst = (char*)malloc(sizeof(char) * (len + 1));
	if (dst == NULL)
		return (NULL);
	i = 0;
	while (src[i])
	{
		dst[i] = f(i, src[i]);
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
