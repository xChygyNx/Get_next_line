/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcredibl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 16:24:46 by pcredibl          #+#    #+#             */
/*   Updated: 2019/04/24 17:41:45 by pcredibl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int					ft_atoi(const char *str)
{
	int				res_over;
	long long int	res;
	int				sign;
	int				overflow;

	res = 0;
	sign = 1;
	overflow = 0;
	while (*str == '\t' || *str == '\n' || *str == '\v'
			|| *str == '\f' || *str == '\r' || *str == ' ')
		str++;
	if (*str == '+' || *str == '-')
		sign = *str++ == '-' ? -1 : 1;
	while (*str > 47 && *str < 58)
	{
		overflow = (res / 922337203685477581 != 0 ? 1 : 0);
		if (overflow)
			break ;
		res = res * 10 + ((int)(*str++ - '0'));
	}
	res_over = sign == 1 ? -1 : 0;
	return (overflow == 0 ? (int)res * sign : res_over);
}
