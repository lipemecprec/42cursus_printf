/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faguilar <faguilar@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 15:39:20 by faguilar          #+#    #+#             */
/*   Updated: 2021/10/18 01:05:34 by faguilar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h>

int main()
{
	// ft_printf("1, 2, 3, -d test, testing, 0.4s sound, 1, 2, 3xp, sound, -*dtest\n");
	// ft_printf("c -> |%c|\n", 'a');
	// ft_printf("%c%c%c*\n", '\0', '1', 1);
	// ft_printf("Expected: [\\01\\1*]");
	// ft_printf("%s", "");
	// ft_printf("%s", "Another string.\n");
	// ft_printf("%p\n", (void *)"Another string.");
	// printf("%p\n", (void *)"Another string.");
	ft_printf("(void *)1 > %p\n", (void *)-1); // sh test 42
	printf("( *)1 > %p\n", (void *)-1);
	char *a;
	ft_printf("a > %p\n", &a);
	printf("a > %p\n", &a);
	static char *sa;
	ft_printf("sa > %p\n", &sa);
	printf("sa > %p\n", &sa);
	char aa;
	ft_printf("aa > %p\n", &aa);
	printf("aa > %p\n", &aa);
	char saa;
	ft_printf("saa > %p\n", &saa);
	printf("saa > %p\n", &saa);
	ft_printf("%d\n", -2147483648);
	printf("%d\n", -2147483648);
	ft_printf("%i\n", 0);
	printf("%i\n", 0);
	ft_printf("%u\n", -2147483648);
	printf("%u\n", -2147483648);
	ft_printf("%u\n", 2147483648);
	printf("%u\n", 2147483648);
	ft_printf("%u\n", 0);
	printf("%u\n", 0);
	return (0);
}
