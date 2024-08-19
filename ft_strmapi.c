#include "libft.h"
#include <stdlib.h>

char *ft_strmapi(char const *s, char (*f)(unsigned int,char))
{
  size_t len;
  unsigned int i;
  char *new_str;
  if(!s || !f)
    return NULL;
  len = ft_strlen(s);
  new_str = (char *)malloc((len + 1) * sizeof(char));
  if(!new_str)
    return NULL;
  i = 0;
  while(i < len)
  {
    new_str[i] = f(i,s[i]);;
    i++;
  }
  new_str[len] = '\0';
  return (new_str);
}
