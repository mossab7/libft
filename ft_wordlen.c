#include "libft.h"

size_t	ft_wordlen(const char *str, char *charset)
{
	size_t	len;

	len = 0;
	while (*str && ft_issep(*str, charset))
		str++;
	while (*str && !ft_issep(*str, charset))
	{
		len++;
		str++;
	}
	return (len);
}
