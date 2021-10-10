/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faguilar <faguilar@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 22:26:55 by faguilar          #+#    #+#             */
/*   Updated: 2021/10/10 20:30:26 by faguilar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static void	ft_digtohex(int n, char **str)
{
	char	*hex;

	hex = "0123456789abcdef";
	*str = ft_chrjoin(*str, (char)*(hex + n));
}

void	ft_puthex(long int n, char **str)
{
	if (n < 0)
	{
		n = -n;
	}
	if (n >= 16)
		ft_puthex(n / 16, str);
	ft_digtohex(n % 16, str);
}

static void	ft_digtoupperhex(int n, char **str)
{
	char	*hex;

	hex = "0123456789ABCDEF";
	*str = ft_chrjoin(*str, (char)*(hex + n));
}

void	ft_putupperhex(long int n, char **str)
{
	if (n < 0)
		n = (unsigned int)n;
	if (n >= 16)
		ft_putupperhex(n / 16, str);
	ft_digtoupperhex(n % 16, str);
}
