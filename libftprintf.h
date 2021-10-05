/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faguilar <faguilar@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 18:31:20 by faguilar          #+#    #+#             */
/*   Updated: 2021/10/04 03:00:21 by faguilar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include "libft/libft.h"
# define INT_MIN -2147483648
# define INT_MAX 2147483647
# define UINT_MAX 4294967295
# define LONG_MIN -214748365
# define LONG_MAX 2147483647
# define ULONG_MAX 4294967295
# define LLONG_MIN -9223372036854775808
# define LLONG_MAX 9223372036854775807
# define ULLONG_MAX 18446744073709551615

int		ft_printf(const char *str, ...);
void	ft_puthex(long int n, char **str);
void	ft_putaddress(unsigned long n, char **str);
char	*ft_chrjoin(char const *s1, char c);
void	ft_putchar(char c, char **str);
void	ft_putstr(char *s, char **str);
void	ft_putnbr(int n, char **str);
void	ft_putunbr(unsigned int n, char **str);

#endif
