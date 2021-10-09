/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faguilar <faguilar@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 00:29:20 by faguilar          #+#    #+#             */
/*   Updated: 2021/10/04 00:58:15 by faguilar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static void	ft_putdigit(int n, char **str)
{
	char	c;

	c = n + '0';
	*str = ft_chrjoin(*str, (char)c);
}

void	ft_putunbr(unsigned int n, char **str)
{
	if (n >= 10)
		ft_putunbr(n / 10, str);
	ft_putdigit(n % 10, str);
}
