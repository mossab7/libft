#include "libft.h"
size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	lensrc;
	size_t	lendest;
	size_t	nlen;
	size_t	i;

	i = 0;
	lensrc = ft_strlen(src);
	lendest = ft_strlen(dest);
	if (!dest || !src)
		return (0);
	if (size <= lendest)
		return (lensrc + size);
	while (src[i] && lendest + i < size - 1)
	{
		dest[(lendest + i)] = src[i];
		i ++;
	}
	dest[(lendest + i)] = '\0';
	nlen = lensrc + lendest;
	return (nlen);
}