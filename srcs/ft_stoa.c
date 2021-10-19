/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faguilar <faguilar@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 14:10:50 by faguilar          #+#    #+#             */
/*   Updated: 2021/10/19 15:36:39 by faguilar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_stoa(char *s)
{
	char	*a;
	int		s_len;

	if (!s)
		s = "(null)";
	s_len = ft_strlen(s);
	a = (char *)malloc((s_len + 1) * sizeof(char));
	ft_memcpy(a, s, s_len + 1);
	return (a);
}
