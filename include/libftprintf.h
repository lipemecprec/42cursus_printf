/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faguilar <faguilar@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 18:31:20 by faguilar          #+#    #+#             */
/*   Updated: 2021/10/12 14:41:25 by faguilar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include "libft.h"

int		ft_printf(const char *str, ...);
void	ft_puthex(long int n, char **str);
void	ft_putupperhex(long int n, char **str);
void	ft_putaddress(long int n, char **str);
char	*ft_chrjoin(char const *s1, char c);
void	ft_putchar(char c, char **str);
void	ft_putstr(char *s, char **str);
void	ft_putnbr(int n, char **str);
void	ft_putunbr(unsigned int n, char **str);

#endif
