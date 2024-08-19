#include "libft.h"

void	ft_putnbr_fd(int n,int fd)
{
	long	nb;
	long	div;

	nb = n;
	div = 1;
	if (nb < 0)
	{
		ft_putchar_fd('-',fd);
		nb = -nb;
	}
	while (nb / div >= 10)
		div *= 10;
	while (div > 0)
	{
		ft_putchar_fd(((nb / div) + '0'),fd);
		nb %= div;
		div /= 10;
	}
}
