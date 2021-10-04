/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faguilar <faguilar@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 18:20:59 by faguilar          #+#    #+#             */
/*   Updated: 2021/10/04 00:32:03 by faguilar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	flag_check(const char *str, va_list	ap, char **str_out)
{
	int		i;

	if (*str == 'c')
		ft_putchar(va_arg(ap, int), str_out);
	else if (*str == 's')
		ft_putstr(va_arg(ap, char *), str_out);
	else if (*str == 'p')
		ft_putaddress(va_arg(ap, unsigned long int), str_out);
	else if (*str == 'd' || *str == 'i')
		ft_putnbr(va_arg(ap, int), str_out);
	else if (*str == 'u')
	{
		i = va_arg(ap, unsigned int);
		ft_putnbr_fd(i, 1);
	}
	else if (*str == 'x')
	{
		i = va_arg(ap, int);
		ft_puthex_fd(i, 1);
	}
	else if (*str == '%')
	{
		*str_out = ft_chrjoin(*str_out, *str);
	}
}

void	readline(const char *str, va_list	ap, char **str_out)
{
	while (*str != 0)
	{
		if (*str == '%')
		{
			str++;
			flag_check(str, ap, str_out);
		}
		else{
			*str_out = ft_chrjoin(*str_out, *str);
		}
		str++;
	}
}

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	char	**str_out_ptr;
	char	*str_out;

	str_out = "";
	str_out_ptr = &str_out;
	va_start(ap, str);
		readline(str, ap, str_out_ptr);
	va_end(ap);
	ft_putstr_fd(str_out, 1);
	return (ft_strlen(str_out));
}
