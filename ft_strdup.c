#include <stdlib.h>
#include "libft.h"
char	*ft_strdup(const char *src)
{
	size_t		len;
	char	*dest;

	len = ft_strlen(src);
	dest = (char *)malloc((len + 1) * sizeof(char));
	if (!dest)
		return (NULL);
  ft_strcpy(dest,src);
	return (dest);
}
