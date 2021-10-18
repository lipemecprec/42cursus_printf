/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faguilar <faguilar@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 13:37:18 by faguilar          #+#    #+#             */
/*   Updated: 2021/10/18 01:11:12 by faguilar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdlib.h>

static char	*flag_check(const char *str, va_list ap)
{
	// char *out;
	// cspdiuxX%
	if (*str == 'c')
		return (ft_ctoa(va_arg(ap, int)));
	if (*str == 's')
		return (ft_stoa(va_arg(ap, char *)));
	if (*str == 'p')
		return (ft_ptoa(va_arg(ap, long long)));
	if (*str == 'd' || *str == 'i')
		return (ft_itoa_base(va_arg(ap, int), 10, *str));
	if (*str == 'u')
		return (ft_ulitoa_base(va_arg(ap, unsigned int), 10, *str));
	if (*str == 'x' || *str == 'X')
		return (ft_ulitoa_base(va_arg(ap, unsigned int), 16, *str));
	if (*str == '%')
		return (ft_ctoa(*str));
	return (NULL);
}

void	readline(const char *str, va_list	ap, char **str_out, int *len)
{
	char	*temp_str;
	char	*temp_flag;
	char	*temp_c;

	while (*str != 0)
	{
		temp_str = *str_out;
		if (*str == '%')
		{
			str++;
			temp_flag = flag_check(str, ap);
			*str_out = ft_charsjoin(temp_str, temp_flag, *str, len);
			free(temp_flag);
		}
		else
		{
			temp_c = ft_ctoa(*str);
			*str_out = ft_charsjoin(temp_str, temp_c, *str, len);
			free(temp_c);
		}
		str++;
		free(temp_str);
	}
}

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	char	*str_out;
	int 	len;

	len = 0;
	str_out = ft_strdup("");
	va_start(ap, str);
	readline(str, ap, &str_out, &len);
	va_end(ap);
	ft_putchars(str_out, len);
	free(str_out);
	return (len);
}
