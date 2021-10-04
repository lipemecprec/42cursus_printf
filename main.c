#include "libftprintf.h"
#include <stdio.h>

void	read_test()
{
	int	ft, or;

	ft = ft_printf("\a\b\t\n\v\f\r\n\0");
	or = printf("\a\b\t\n\v\f\r\n\0");
	ft_printf("ft = %d of = %d", ft, or);
}

void c_test()
{
	int	ft, or;

	ft_printf("c test\n");
	ft = ft_printf("|%c| |%c| |%c| |%c| |%c| |%c| |%c|\t", 'a' , '\0', (char)128, -1, -90, '\"', '\'');
	or = printf("|%c| |%c| |%c| |%c| |%c| |%c| |%c|\t", 'a' , '\0', (char)128, -1, -90, '\"', '\'');
	ft_printf("ft = %d, or = %d\n", ft, or);
	/* Test all char */
	// int ascii = 0;
	// while (ascii <= 128)
	// {
	// 	ft = ft_printf("%c", ascii);
	// 	or = printf("%c", ascii);
	// 	if (ft != or)
	// 	{
	// 		printf("ft = %d, or = %d\n", ft, or);
	// 	}
	// 	ascii++;
	// }
}

void	s_test()
{
	int	ft, or;
	char *s = "abc";

	ft_printf("s test\n");
	ft = ft_printf("|%s| |%s| |%s| |%s| ", s, "", "\a\b\t\n\v\f\r", "\0after null!");
	or = printf("|%s| |%s| |%s| |%s| ", s, "", "\a\b\t\n\v\f\r", "\0after null!");
	ft_printf("ft = %d, or = %d\n", ft, or);
	printf("ft = %d, or = %d\n", ft, or);
}

void	p_test()
{
	int		ft, or;
	char 	*s = "abc";
	void	*p = &s;

	ft_printf("p test\n");
	ft = ft_printf("|%p| |%p| |%p|", p, (char *)malloc(1), (void *)0);
	or = printf("|%p| |%p| |%p|", p, (char *)malloc(1), (void *)0);
	ft_printf("ft = %d, or = %d\n", ft, or);
}

void	d_test()
{
	int		ft, or;
	int	d = -123;

	ft_printf("d test\t");
	ft = ft_printf("|%d| |%d| |%d| |%d| |%d|", d, 0, -2147483648, 2147483647, 2147483649);
	or = printf("|%d| |%d| |%d| |%d| |%d|", d, 0, -2147483648, 2147483647, 2147483649);
	ft_printf("ft = %d, or = %d\n", ft, or);
}

int	main()
{
	read_test();
	// c_test();
	s_test();
	p_test();
	d_test();
	// int				i = 2;
	// ft_printf("o\t");
	// ft = ft_printf("|%i|\t\t\t", i);
	// or = printf("|%i|\t\t\t", i);
	// ft_printf("ft = %d, or = %d\n", ft, or);
	// unsigned int	u = -42;
	// ft_printf("u\t");
	// ft = ft_printf("|%u|\t\t\t", -42);
	// or = printf("|%u|\t\t\t", -42);
	// ft_printf("ft = %d, or = %d\n", ft, or);
	// int				x = 0;
	// ft_printf("x\t");
	// ft = ft_printf("|%x|\t\t\t", x);
	// or = printf("|%x|\t\t\t", x);
	// ft_printf("ft = %d, or = %d\n", ft, or);
	// x = 161616;
	// ft_printf("x\t");
	// ft = ft_printf("|%x|\t\t\t", x);
	// or = printf("|%x|\t\t\t", x);
	// ft_printf("ft = %d, or = %d\n", ft, or);
	// x = 5000000;
	// ft_printf("x\t");
	// ft = ft_printf("|%x|\t\t\t", x);
	// or = printf("|%x|\t\t\t", x);
	// ft_printf("ft = %d, or = %d\n", ft, or);
	// x = -2147483648;
	// ft_printf("x\t");
	// ft = ft_printf("|%x|\t\t\t", x);
	// or = printf("|%x|\t\t\t", x);
	// ft_printf("ft = %d, or = %d\n", ft, or);
	// x = 2147483647;
	// ft_printf("x\t");
	// ft = ft_printf("|%x|\t\t\t", x);
	// or = printf("|%x|\t\t\t", x);
	// ft_printf("ft = %d, or = %d\n", ft, or);
	// ft_printf("%%\t");
	// ft = ft_printf("t|%%|\t\t\t");
	// or = printf("|%%|\t\t\t");
	// ft_printf("ft = %d, or = %d\n", ft, or);
}

