/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcredibl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 12:34:23 by pcredibl          #+#    #+#             */
/*   Updated: 2019/04/22 22:20:54 by pcredibl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_itoa(int num)
{
	int		len;
	char	*str_num;

	len = ft_intlen(num);
	str_num = (char*)malloc(sizeof(char) * len + 1);
	if (str_num == NULL)
		return (NULL);
	str_num[0] = '0';
	if (num < 0)
	{
		str_num[0] = '-';
		if (num == -2147483648)
		{
			str_num[1] = '2';
			num = -147483648;
		}
		num *= -1;
	}
	str_num[len] = '\0';
	while (num > 0)
	{
		str_num[--len] = (char)(num % 10 + '0');
		num /= 10;
	}
	return (str_num);
}
