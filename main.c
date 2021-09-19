/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faguilar <faguilar@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 17:56:14 by faguilar          #+#    #+#             */
/*   Updated: 2021/09/19 12:28:29 by faguilar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h>

int	main()
{
	char			c = 'a';
	ft_printf("%c print a single character.\n", c);
	printf("ORIG >>> %c print a single character.\n", c);
	char 			*s = "abc";
	ft_printf("%s print a string of characters.\n", s);
	printf("ORIG >>> %s print a string of characters.\n", s);
	void 			*p = &s;
	ft_printf("%p The void * pointer argument is printed in hexadecimal.\n", p);
	printf("ORIG >>> %p The void * pointer argument is printed in hexadecimal.\n", p);
	int				d = 2;
	ft_printf("%d print a decimal (base 10) number.\n", d);
	printf("ORIG >>> %d print a decimal (base 10) number.\n", d);
	int				i = 2;
	ft_printf("%i print an integer in base 10.\n", i);
	printf("ORIG >>> %i print an integer in base 10.\n", i);
	unsigned int	u = 42;
	ft_printf("%u print an unsigned decimal (base 10) number.\n", u);
	printf("ORIG >>> %u print an unsigned decimal (base 10) number.\n", u);
	int				x = 256;
	ft_printf("%x print a number in hexadecimal (base 16).\n", x);
	printf("ORIG >>> %x print a number in hexadecimal (base 16).\n", x);
	ft_printf("%% print a percent sign\n");
	printf("ORIG >>> %% print a percent sign\n");
}

// c > ft_putchar_fd()		char	int
// s > ft_putstr_fd()		char*	int
// p > ft_putptr - NEW()
// d > ft_putnbr_fd()		int		int
// i > ft_putnbr_fd()		int		int
// u > ft_putnbr_fd()		int		int
// x > ft_putnbrbase_fd HEX NEW()
// % > ft_putchar_fd()		char	int
