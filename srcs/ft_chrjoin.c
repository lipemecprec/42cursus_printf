/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_chrjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faguilar <faguilar@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 14:25:03 by faguilar          #+#    #+#             */
/*   Updated: 2021/10/12 19:36:17 by faguilar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char	*ft_chrjoin(char const *s1, char c)
{
	char	*s2;
	char	*join;

	s2 = (char *)malloc(2 * sizeof(char));
	s2[0] = c;
	s2[1] = '\0';
	join = ft_strjoin(s1, s2);
	free(s2);
	return (join);
}
