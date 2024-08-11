#include <string.h>
#include <stdlib.h>
#include "libft.h"
void *ft_memalloc(size_t size)
{
  void *memoryArea;
  memoryArea = malloc(size);
  if(!memoryArea)
    return (NULL);
  ft_bzero(memoryArea,size);
  return (memoryArea);
}
