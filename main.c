#include "libftprintf.h"
#include <stdio.h>

void c_test()
{
	int	ft, or;
	char			c[10] = {'a' , '\0', 255, -1, -90, '\"', '\''};
	int i_c = 0;
	while (i_c++ < 6)
	{
		ft_printf("c\t");
		ft = ft_printf("|%c|\t\t\t", c[i_c]);
		or = printf("|%c|\t\t\t", c[i_c]);
		ft_printf("ft = %d, or = %d\n", ft, or);
	}
}


int	main()
{
	int	ft, or;

	ft = ft_printf("FLAG\tMINE\t\t\tORIG\n");
	c_test();
	char 			*s = "abc";
	ft_printf("s\t");
	ft = ft_printf("|%s|\t\t\t", s);
	or = printf("|%s|\t\t\t", s);
	ft_printf("ft = %d, or = %d\n", ft, or);
	void 			*p = &s;
	ft_printf("p\t");
	ft = ft_printf("|%p|\t\t\t", p);
	or = printf("|%p|\t\t\t", p);
	ft_printf("ft = %d, or = %d\n", ft, or);
	p = (char *)malloc(1);
	ft_printf("p\t");
	ft = ft_printf("|%p|\t\t\t", p);
	or = printf("|%p|\t\t\t", p);
	ft_printf("ft = %d, or = %d\n", ft, or);
	p = NULL;
	ft_printf("p\t");
	ft = ft_printf("|%p|\t\t\t", p);
	or = printf("|%p|\t\t\t", p);
	ft_printf("ft = %d, or = %d\n", ft, or);
	int				d = 2;
	ft_printf("d\t");
	ft = ft_printf("|%d|\t\t\t", d);
	or = printf("|%d|\t\t\t", d);
	ft_printf("ft = %d, or = %d\n", ft, or);
	int				i = 2;
	ft_printf("o\t");
	ft = ft_printf("|%i|\t\t\t", i);
	or = printf("|%i|\t\t\t", i);
	ft_printf("ft = %d, or = %d\n", ft, or);
	unsigned int	u = -42;
	ft_printf("u\t");
	ft = ft_printf("|%u|\t\t\t", -42);
	or = printf("|%u|\t\t\t", -42);
	ft_printf("ft = %d, or = %d\n", ft, or);
	int				x = 0;
	ft_printf("x\t");
	ft = ft_printf("|%x|\t\t\t", x);
	or = printf("|%x|\t\t\t", x);
	ft_printf("ft = %d, or = %d\n", ft, or);
	x = 161616;
	ft_printf("x\t");
	ft = ft_printf("|%x|\t\t\t", x);
	or = printf("|%x|\t\t\t", x);
	ft_printf("ft = %d, or = %d\n", ft, or);
	x = 5000000;
	ft_printf("x\t");
	ft = ft_printf("|%x|\t\t\t", x);
	or = printf("|%x|\t\t\t", x);
	ft_printf("ft = %d, or = %d\n", ft, or);
	x = -2147483648;
	ft_printf("x\t");
	ft = ft_printf("|%x|\t\t\t", x);
	or = printf("|%x|\t\t\t", x);
	ft_printf("ft = %d, or = %d\n", ft, or);
	x = 2147483647;
	ft_printf("x\t");
	ft = ft_printf("|%x|\t\t\t", x);
	or = printf("|%x|\t\t\t", x);
	ft_printf("ft = %d, or = %d\n", ft, or);
	ft_printf("%%\t");
	ft = ft_printf("t|%%|\t\t\t");
	or = printf("|%%|\t\t\t");
	ft_printf("ft = %d, or = %d\n", ft, or);
}

