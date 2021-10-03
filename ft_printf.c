/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faguilar <faguilar@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 18:20:59 by faguilar          #+#    #+#             */
/*   Updated: 2021/10/03 15:27:40 by faguilar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int flag_check(const char *str, va_list	ap, int *len)
{
	char	*s;
	int		i;
	
	if (*str == 'c')
	{
		ft_putchar_fd(va_arg(ap, int), 1);
		len++;
	}
	else if (*str == 's')
	{
		s = va_arg(ap, char *);
		ft_putstr_fd(s, 1);
		len += ft_strlen(s);
	}
	else if (*str == 'p')
	{
		ft_putaddress_fd(va_arg(ap, unsigned long int), 1); // TODO Tratar NULL pointer
		// len += ft_strlen(s);
	}
	else if (*str == 'd' || *str == 'i')
	{
		i = va_arg(ap, int);
		ft_putnbr_fd(i, 1);
		len++;
	}
	else if (*str == 'u')
	{
		i = va_arg(ap, unsigned int);
		ft_putnbr_fd(i, 1);
		len++;
	}
	else if (*str == 'x')
	{
		i = va_arg(ap, int);
		ft_puthex_fd(i, 1);
		// len += ft_strlen(s);
	}
	else if (*str == '%')
	{
		ft_putchar_fd('%', 1);
		len++;
	}
	return (*len);
}

int	readline(const char *str, va_list	ap, int		*len)
{
	while (*str != 0)
	{
		if (*str == '%')
		{
			str++;
			flag_check(str, ap, len);
		}
		else{
			ft_putchar_fd(*str, 1);
		}
		str++;
	}
	return (*len);
}

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	int *len_pointer;
	int lenght;

	len_pointer = (int *)malloc(sizeof(int));
	va_start(ap, str);
		readline(str, ap, len_pointer);
	va_end(ap);

	lenght = *len_pointer;
	free(len_pointer);
	return (lenght);
}
