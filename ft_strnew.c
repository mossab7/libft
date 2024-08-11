#include <string.h>
#include <stdlib.h>
#include "libft.h"
char *ft_strnew(size_t size)
{
  char *newstr;
  newstr = (char *)malloc((size + 1) * sizeof(char));
  if(!newstr)
    return (NULL);
  ft_memset((void *)newstr, '\0', size + 1);
  return (newstr);
}
