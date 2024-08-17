#include "libft.h"

void	ft_putnbr(int n)
{
	long	nb;
	long	div;

	nb = n;
	div = 1;
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	while (nb / div >= 10)
		div *= 10;
	while (div > 0)
	{
		ft_putchar((nb / div) + '0');
		nb %= div;
		div /= 10;
	}
}
