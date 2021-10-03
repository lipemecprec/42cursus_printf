#include "libftprintf.h"

static void	ft_digtohex(int n, int fd)
{
	char	*hex;
	hex = "0123456789abcdef";
	write(fd, hex + n, 1);
}

static void	ft_puthexadd(long long n, int fd)
{
	if (n >= 16)
		ft_puthexadd(n / 16, fd);
	ft_digtohex(n % 16, fd);
}

void	ft_putaddress_fd(unsigned long n, int fd)
{
	// if(n == 0)
	// {
	// 	write(fd, "(null)", 6);
	// 	return;
	// }
	write(fd, "0x", 2);
	ft_puthexadd(n, fd);
}
