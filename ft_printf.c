/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faguilar <faguilar@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 17:51:59 by faguilar          #+#    #+#             */
/*   Updated: 2021/09/19 12:17:40 by faguilar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printf(const char *str, ...)
{
	void	(*parser[256])(char, int);
	parser['c'] = ft_putchar_fd;
	while (*str != 0)
	{
		(*parser['c'])(*str, 1);
		str++;
	}
	return (0);
}
