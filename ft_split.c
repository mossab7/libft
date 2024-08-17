#include "libft.h"
#include <stdlib.h>

char	**ft_split(char *str, char c)
{
	size_t	j;
	size_t	strlen;
	char	**strptr;
	char	charset[2];

	charset[0] = c;
	charset[1] = '\0';
	j = ft_countwords(str, charset);
	strptr = (char **)malloc((j + 1) * sizeof(char *));
	if (strptr == NULL)
		return (NULL);
	j = 0;
	while (*str)
	{
		while (ft_issep(*str, charset) && *str != '\0')
			str++;
		if (*str == '\0')
			break ;
		strlen = ft_wordlen(str, charset);
		strptr[j++] = ft_strndup(str, strlen);
		str += strlen;
	}
	strptr[j] = NULL;
	return (strptr);
}
