/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getters.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faguilar <faguilar@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 15:37:14 by faguilar          #+#    #+#             */
/*   Updated: 2021/10/03 21:38:15 by faguilar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_putchar(char c, char **str)
{
  if (c == 0)
    c = (char)128;
  *str = ft_chrjoin(*str, c);
}

void	ft_putstr(char *s, char **str)
{
  if (s == 0)
    return;
  *str = ft_strjoin(*str, s);
}
