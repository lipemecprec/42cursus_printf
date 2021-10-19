/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faguilar <faguilar@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 14:55:43 by faguilar          #+#    #+#             */
/*   Updated: 2021/10/19 15:42:22 by faguilar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_ptoa(long long p)
{
	char	*a;
	char	*temp;
	char	*temp_itoa;
	int		mock_len;

	if (!p)
		return (ft_stoa(0));
	temp = (char *)malloc(32 * sizeof(char));
	temp[0] = '0';
	temp[1] = 'x';
	mock_len = 2;
	temp_itoa = ft_ulitoa_base(p, 16, 'x');
	a = ft_charsjoin(temp, temp_itoa, 'x', &mock_len);
	free(temp_itoa);
	free(temp);
	return (a);
}
