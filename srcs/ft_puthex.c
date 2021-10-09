/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faguilar <faguilar@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 22:26:55 by faguilar          #+#    #+#             */
/*   Updated: 2021/10/04 02:03:48 by faguilar         ###   ########.fr       */
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
	if (n >= 16)
		ft_puthex(n / 16, str);
	ft_digtohex(n % 16, str);
}
