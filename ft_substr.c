#include "libft.h"
#include <string.h>

char *ft_substr(char const *s,unsigned int start,size_t len)
{
  char *substr;

  substr = ft_strndup((s + start),len);
  if(!substr)
    return NULL;
  return (substr);
}
