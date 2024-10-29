#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	num;
	char	digit;

	num = n;
	if (num < 0)
	{
		num = -num;
		write(fd, "-", 1);
	}
	if (num > 9)
	{
		ft_putnbr_fd(num / 10, fd);
	}
	digit = (num % 10) + 48;
	write(fd, &digit, 1);
}
