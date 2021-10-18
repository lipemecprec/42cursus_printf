/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ctoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faguilar <faguilar@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 20:17:58 by faguilar          #+#    #+#             */
/*   Updated: 2021/10/18 20:32:53 by faguilar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char	*ft_ctoa(char c)
{
	char	*a;

	a = (char *)malloc(2 * sizeof(char));
	a[0] = c;
	a[1] = '\0';
	return (a);
}