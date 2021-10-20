/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faguilar <faguilar@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 21:44:52 by faguilar          #+#    #+#             */
/*   Updated: 2021/10/20 20:03:05 by faguilar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	ft_itoc(int nbr, char flag);
static int	ft_intlen_base(long long int n, long long int base);

char	*ft_itoa_base(int n, int base, char flag)
{
	char		*str;
	int			len;
	long int	nbr;

	nbr = (long int)n;
	len = ft_intlen_base(nbr, base);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (nbr == 0)
		str[--len] = '0';
	if (nbr < 0)
	{
		str[0] = '-';
		nbr = -nbr;
	}
	while (nbr > 0)
	{
		str[--len] = ft_itoc(nbr % base, flag);
		nbr = nbr / base;
	}
	return (str);
}

char	*ft_ulitoa_base(long n, int base, char flag)
{
	char				*str;
	int					len;
	unsigned long int	nbr;

	nbr = (unsigned long int)n;
	if (n < 0)
		len = 16;
	else
		len = ft_intlen_base(nbr, base);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (nbr == 0)
		str[--len] = '0';
	while (nbr > 0)
	{
		str[--len] = ft_itoc(nbr % base, flag);
		nbr = nbr / base;
	}
	return (str);
}

static char	ft_itoc(int nbr, char flag)
{
	char	alpha;

	if (flag == 'X')
		alpha = 'A';
	else
		alpha = 'a';
	if (nbr < 10)
		return (nbr + '0');
	else
		return (alpha + nbr - 10);
}

static int	ft_intlen_base(long long int n, long long int base)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		i++;
		n = -n;
	}
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n = n / base;
		i++;
	}
	return (i);
}
