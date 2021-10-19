/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faguilar <faguilar@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 21:26:12 by faguilar          #+#    #+#             */
/*   Updated: 2021/10/19 15:25:10 by faguilar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include "libft.h"

int		ft_printf(const char *str, ...);
char	*ft_charsjoin(char *s1, char *s2, char flag, int *s1len);
char	*ft_ctoa(char c);
char	*ft_itoa_base(int n, int base, char flag);
char	*ft_ulitoa_base(long int nbr, int base, char flag);
char	*ft_ptoa(long long p);
char	*ft_stoa(char *s);
void	ft_putchars(char *str, int len);

#endif
