#include "libft.h"
#include <stdlib.h>

char	*ft_strtrim(char const *s,char const *set)
{
	size_t	size;
	size_t	start;
	size_t	end;
	char	*trimstr;

	if (!s)
		return (NULL);
	start = 0;
	while (ft_issep(s[start],(char *)set))
		start++;
	end = start;
	while (s[end])
		end++;
	while (ft_issep(s[end - 1],(char *)set) && end > start)
		end--;
	size = end - start;
	trimstr = (char *)malloc((size + 1) * sizeof(char));
	if (!trimstr)
		return (NULL);
	ft_strncpy(trimstr, (s + start), size);
	trimstr[size] = '\0';
	return (trimstr);
}
