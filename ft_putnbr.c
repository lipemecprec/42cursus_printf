/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faguilar <faguilar@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 00:29:20 by faguilar          #+#    #+#             */
/*   Updated: 2021/10/04 00:34:22 by faguilar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static void	ft_putdigit(int n, char **str)
{
	char	c;

	c = n + '0';
	*str = ft_chrjoin(*str, (char)c);
}

void	ft_putnbr(int n, char **str)
{
	long int	nbr;

	nbr = (long int)n;
	if (n < 0)
	{
		*str = ft_chrjoin(*str, '-');
		nbr = -nbr;
	}
	if (nbr >= 10)
		ft_putnbr(nbr / 10, str);
	ft_putdigit(nbr % 10, str);
}
