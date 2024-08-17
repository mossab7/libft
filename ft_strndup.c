
#include "libft.h"
#include <stdlib.h>

char	*ft_strndup(const char *src, size_t size)
{
	char	*dest;

	dest = (char *)malloc((size + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	ft_strncpy(dest, src, size);
	return (dest);
}
