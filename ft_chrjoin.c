/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_chrjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faguilar <faguilar@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 14:25:03 by faguilar          #+#    #+#             */
/*   Updated: 2021/10/04 02:42:53 by faguilar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char	*ft_chrjoin(char const *s1, char c)
{
	char	*join;
	size_t	s1len;

	s1len = ft_strlen(s1);
	join = (char *)malloc(s1len + 1 + 1);
	if (!join)
		return (NULL);
	ft_strlcpy(join, s1, s1len + 1);
	join[s1len] = c;
	join[s1len + 1] = 0;
	return (join);
}
