/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddress.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faguilar <faguilar@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 00:32:55 by faguilar          #+#    #+#             */
/*   Updated: 2021/10/10 20:45:43 by faguilar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static void	ft_digtohex(int n, char **str)
{
	char	*hex;

	hex = "0123456789abcdef";
	*str = ft_chrjoin(*str, (char)*(hex + n));
}

static void	ft_puthexadd(long int n, char **str)
{
	unsigned long int	nbr;

	if (n < 0)
		nbr = 0 + n;
	else
		nbr = n;
	if (nbr >= 16)
		ft_puthexadd(nbr / 16, str);
	ft_digtohex(nbr % 16, str);
}

void	ft_putaddress(long int n, char **str)
{
	*str = ft_strjoin(*str, "0x");
	ft_puthexadd(n, str);
}
