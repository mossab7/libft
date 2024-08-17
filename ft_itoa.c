#include "libft.h"
#include <stdlib.h>

char	*ft_itoa(int n)
{
	size_t	len;
	long	nb;
	int		sign;
	char	*number;

	len = ft_numlen(n);
	sign = (n < 0);
	number = (char *)malloc((len + 1) * sizeof(char));
	if (!number)
		return (NULL);
	nb = n;
	if (sign)
	{
		nb = -nb;
		number[0] = '-';
	}
	number[len] = '\0';
	while (len > (size_t)sign)
	{
		number[--len] = (nb % 10) + '0';
		nb /= 10;
	}
	return (number);
}