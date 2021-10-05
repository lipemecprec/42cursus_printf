/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddress_fd.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faguilar <faguilar@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 00:32:55 by faguilar          #+#    #+#             */
/*   Updated: 2021/10/04 00:32:56 by faguilar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static void	ft_digtohex(int n, char **str)
{
	char	*hex;

	hex = "0123456789abcdef";
	*str = ft_chrjoin(*str, (char)*(hex + n));
}

static void	ft_puthexadd(long long n, char **str)
{
	if (n >= 16)
		ft_puthexadd(n / 16, str);
	ft_digtohex(n % 16, str);
}

void	ft_putaddress(unsigned long n, char **str)
{
	*str = ft_strjoin(*str, "0x");
	ft_puthexadd(n, str);
}
