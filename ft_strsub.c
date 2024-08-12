#include "libft.h"
#include "stdlib.h"
char *ft_strsub(char const *s, unsigned char start, size_t len)
{
  char *substr;
  if(!s)
    return NULL;
  substr = (char *)malloc((len + 1) * sizeof(char));
  if(!substr)
    return NULL;
  ft_strncpy(substr,(s + start),len);
  substr[len] = '\0';
  return substr;
}
