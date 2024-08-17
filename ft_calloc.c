#include "libft.h"
#include <stdlib.h>
#include <string.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void  *memoryArea;
  size_t FullSize;

  if(nmemb == 0 || size == 0)
  {
    nmemb = 1;
    size = 1;
  }
  FullSize = nmemb * size;
	memoryArea = malloc(FullSize);
	if (!memoryArea)
		return (NULL);
	ft_bzero(memoryArea, FullSize);
	return (memoryArea);
}
