/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faguilar <faguilar@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 18:20:59 by faguilar          #+#    #+#             */
/*   Updated: 2021/10/10 07:21:09 by faguilar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	flag_check(const char *str, va_list	ap, char **str_out)
{
	// cspdiuxX%
	if (*str == 'c')
		ft_putchar(va_arg(ap, int), str_out);
	if (*str == 's')
		ft_putstr(va_arg(ap, char *), str_out);
	if (*str == 'p')
		ft_putaddress(va_arg(ap, unsigned long int), str_out);
	if (*str == 'd' || *str == 'i')
		ft_putnbr(va_arg(ap, int), str_out);
	if (*str == 'u')
		ft_putunbr(va_arg(ap, unsigned int), str_out);
	if (*str == 'x')
		ft_puthex(va_arg(ap, long int), str_out);
	if (*str == 'X')
	{
		ft_puthex(va_arg(ap, long int), str_out);
	}
	if (*str == '%')
		*str_out = ft_chrjoin(*str_out, *str);
}

void	readline(const char *str, va_list	ap, char **str_out)
{
	char *temp;

	while (*str != 0)
	{
		if (*str == '%')
		{
			str++;
			flag_check(str, ap, str_out);
		}
		else
		{
			temp = *str_out;
			*str_out = ft_chrjoin(temp, *str);
			temp = NULL;
			free(temp);
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
