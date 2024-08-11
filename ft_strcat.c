#include <string.h>
#include "libft.h"
char	*ft_strcat(char *dest, const char *src)
{
	size_t		destlen;
	char	*original;

	original = dest;
	destlen = ft_strlen(dest);
	while (*src)
	{
		*(dest + destlen) = *src;
		destlen ++;
		src ++;
	}
	*(dest + destlen) = '\0';
	return (original);
}
