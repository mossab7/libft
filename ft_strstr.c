#include "libft.h"

char	*ft_strstr(const char *str, const char *to_find)
{
	int	j;
	int	i;
	int	len;

	i = 0;
	len = ft_strlen(to_find);
	if (len == 0)
		return ((char *)(str));
	while (str[i])
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			if (!to_find[j + 1])
				return ((char *)(str + i));
			else
				j++;
		}
		i++;
	}
	return (0);
}
