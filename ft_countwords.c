#include "libft.h"

size_t	ft_countwords(char *str, char *charset)
{
	size_t	len;
	size_t	i;

	len = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] && ft_issep(str[i], charset))
			i++;
		if (str[i] && !(ft_issep(str[i], charset)))
			len++;
		while (str[i] && !(ft_issep(str[i], charset)))
			i++;
	}
	return (len);
}
