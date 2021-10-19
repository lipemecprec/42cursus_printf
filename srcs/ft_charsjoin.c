/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_charsjoin.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faguilar <faguilar@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 18:15:46 by faguilar          #+#    #+#             */
/*   Updated: 2021/10/19 15:35:51 by faguilar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_memlcat(char *s1, char *s2, int *s1len, int s2len);

char	*ft_charsjoin(char *s1, char *s2, char flag, int *s1len)
{
	char	*join;
	int		s2len;

	s2len = ft_strlen(s2);
	if (*s2 == '\0' && flag == 'c')
		s2len = 1;
	join = (char *)malloc((*s1len + s2len + 1) * sizeof(char));
	if (!join)
		return (NULL);
	ft_memmove(join, s1, *s1len);
	*s1len = ft_memlcat(join, s2, s1len, s2len);
	return (join);
}

static int	ft_memlcat(char *s1, char *s2, int *s1len, int s2len)
{
	int	i;

	i = 0;
	while (i < s2len)
	{
		s1[*s1len + i] = s2[i];
		i++;
	}
	s1[*s1len + s2len] = '\0';
	return (*s1len + s2len);
}
