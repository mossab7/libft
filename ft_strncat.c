#include "libft.h"
char	*ft_strncat(char *dest, const char *src, size_t nb)
{
	size_t		destlen;
	size_t		i;
	char				*original;

	if (!src || !dest)
		return (dest);
	original = dest;
	destlen = ft_strlen(dest);
	i = 0;
	while (*src && i < nb)
	{
		*(dest + destlen) = *src;
		destlen ++;
		src ++;
		i ++;
	}
	*(dest + destlen) = '\0';
	return (original);
}
