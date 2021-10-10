#include "./srcs/libftprintf.h"
#include <stdio.h>

#define INT_MIN -2147483648
#define INT_MAX 2147483647
#define UINT_MAX 4294967295
#define LONG_MIN -214748365
#define LONG_MAX 2147483647
#define ULONG_MAX 4294967295
#define LLONG_MIN -9223372036854775808
#define LLONG_MAX 9223372036854775807
#define ULLONG_MAX 18446744073709551615

void	read_test(void)
{
	int	ft;
	int	or;

	ft_printf("read test\n");
	ft = ft_printf("\a\b\t\v\f\r\nGo0d\n\0");
	or = printf("\a\b\t\v\f\r\nGo0d\n\0");
	ft_printf("ft = %d of = %d\n", ft, or);
}

void	c_test(void)
{
	int	ft;
	int	or;
	int	ascii;

	ft_printf("c test\n");
	ft = ft_printf("|%c| |%c| |%c| |%c| |%c| |%c| |%c|\n", 'a', '\0', \
	(char)128, -1, -90, '\"', '\'');
	or = printf("|%c| |%c| |%c| |%c| |%c| |%c| |%c|\n", 'a', '\0', \
	(char)128, -1, -90, '\"', '\'');
	ft_printf("ft = %d, or = %d\n", ft, or);
	ascii = 0;
	while (ascii <= 128)
	{
		ft = ft_printf("%c", ascii);
		or = printf("%c", ascii);
		if (ft != or)
		{
			printf("ft = %d, or = %d\n", ft, or);
		}
		ascii++;
	}
}

void	s_test(void)
{
	int		ft;
	int		or;
	char	*s;

	s = "abc";
	ft_printf("s test\n");
	ft = ft_printf("|%s| |%s| |%s| |%s|\n", s, "", "\a\b\t\n\v\f\r", "\0after null!");
	or = printf("|%s| |%s| |%s| |%s|\n", s, "", "\a\b\t\n\v\f\r", "\0after null!");
	ft_printf("ft = %d, or = %d\n", ft, or);
	printf("ft = %d, or = %d\n", ft, or);
}

void	p_test(void)
{
	int		ft;
	int		or;
	char	*s;
	void	*p;

	s = "abc";
	p = &s;
	ft_printf("p test\n");
	ft = ft_printf("|%p| |%p| |%p|\n", p, (char *)malloc(1), (void *)0);
	or = printf("|%p| |%p| |%p|\n", p, (char *)malloc(1), (void *)0);
	ft_printf("ft = %d, or = %d\n", ft, or);
}

void	d_test(void)
{
	int	ft;
	int	or;
	int	d;

	d = -123;
	ft_printf("d test\n");
	ft = ft_printf("|%d| |%d| |%d| |%d| |%d|\n", d, 0, \
	INT_MIN, INT_MAX, INT_MAX + 1);
	or = printf("|%d| |%d| |%d| |%d| |%d|\n", d, 0, \
	INT_MIN, INT_MAX, INT_MAX + 1);
	ft_printf("ft = %d, or = %d\n", ft, or);
}

void	i_test(void)
{
	int	ft;
	int	or;
	int	d;

	d = -123;
	ft_printf("i test\n");
	ft = ft_printf("|%i| |%i| |%i| |%i| |%i|\n", d, 0, \
	INT_MIN, INT_MAX, INT_MAX + 1);
	or = printf("|%i| |%i| |%i| |%i| |%i|\n", d, 0, \
	INT_MIN, INT_MAX, INT_MAX + 1);
	ft_printf("ft = %d, or = %d\n", ft, or);
}

void	u_test(void)
{
	int	ft;
	int	or;
	int	d;

	d = -123;
	ft_printf("u test\n");
	ft = ft_printf("|%u| |%u| |%u| |%u| |%u|\n", d, 0, \
	INT_MIN, UINT_MAX, -1);
	or = printf("|%u| |%u| |%u| |%u| |%u|\n", d, 0, \
	INT_MIN, UINT_MAX, -1);
	ft_printf("ft = %d, or = %d\n", ft, or);
}

void	x_test(void)
{
	int	ft;
	int	or;
	int	x;

	x = 0;
	ft_printf("x test\n");
	ft = ft_printf("|%x| |%x| |%x| |%x| |%x|\n", x, 0, \
	INT_MIN, INT_MAX, INT_MIN - 1);
	or = printf("|%x| |%x| |%x| |%x| |%x|\n", x, 0, \
	INT_MIN, INT_MAX, INT_MIN - 1);
	ft_printf("ft = %d, or = %d\n", ft, or);
}

void	X_test(void)
{
	int	ft;
	int	or;
	int	x;

	x = 0;
	ft_printf("X test\n");
	ft = ft_printf("|%X| |%X| |%X| |%X| |%X|\n", x, 0, \
	INT_MIN, INT_MAX, INT_MIN - 1);
	or = printf("|%X| |%X| |%X| |%X| |%X|\n", x, 0, \
	INT_MIN, INT_MAX, INT_MIN - 1);
	ft_printf("ft = %d, or = %d\n", ft, or);
}

void	percent_test(void)
{
	int	ft;
	int	or;

	ft_printf("% test\n");
	ft = ft_printf("|%%|");
	or = printf("|%%|");
	ft_printf("ft = %d, or = %d\n", ft, or);
}

int	main(void)
{
	read_test();
	c_test();
	s_test();
	p_test();
	d_test();
	i_test();
	u_test();
	x_test();
	X_test();
	percent_test();
	return (0);
}
