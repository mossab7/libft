#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joinstrs;
	size_t	size;

	if (!s1 || !s2)
		return (NULL);
	size = ft_strlen(s1) + ft_strlen(s2);
	joinstrs = malloc((size + 1) * (sizeof(char)));
	if (!joinstrs)
		return (NULL);
	ft_strcpy(joinstrs, s1);
	ft_strcat(joinstrs, s2);
	return (joinstrs);
}
