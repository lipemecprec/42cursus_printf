/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faguilar <faguilar@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 22:26:55 by faguilar          #+#    #+#             */
/*   Updated: 2021/09/29 18:29:59 by faguilar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static void	ft_digtohex(int n, int fd)
{
	char	c;
	char	hex[17] = "0123456789abcdef";

	c = hex[n];
	ft_putchar_fd(c, fd);
}

void	ft_puthex_fd(int n, int fd)
{
	long int	neg_n;

	neg_n = (long int)n;
	if (n < 0)
	{
		neg_n = -neg_n;
	}
	if (neg_n >= 16)
		ft_puthex_fd(neg_n / 16, fd);
	ft_digtohex(neg_n % 16, fd);
}
