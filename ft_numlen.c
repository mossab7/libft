#include <string.h>

size_t	ft_numlen(int n)
{
	long	nb;
	int		sign;
	size_t	len;

	nb = n;
	sign = (n < 0);
	len = 0;
	if (nb == 0)
		return (1);
	if (sign)
		nb = -nb;
	while (nb)
	{
		len++;
		nb /= 10;
	}
	return (len + sign);
}
