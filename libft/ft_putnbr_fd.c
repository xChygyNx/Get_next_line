/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcredibl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 16:42:53 by pcredibl          #+#    #+#             */
/*   Updated: 2019/04/24 12:46:29 by pcredibl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (fd >= 0)
	{
		if (n < 0)
		{
			ft_putchar_fd('-', fd);
			if (n == -2147483648)
			{
				ft_putchar_fd('2', fd);
				n = -147483648;
			}
			n *= -1;
		}
		if (n >= 10)
		{
			ft_putnbr_fd(n / 10, fd);
			ft_putchar_fd((n % 10) + '0', fd);
		}
		else
			ft_putchar_fd((n % 10) + '0', fd);
	}
}
