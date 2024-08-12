#include <stdlib.h>
#include "libft.h"
char *ft_strtrim(char const *s)
{
  size_t size;
  size_t start;
  size_t end;
  char *trimstr;
  if(!s)
    return NULL;
  start = 0;
  while(ft_isspace(s[start]))
    start++;
  end = start;
  while(s[end])
    end++;
  while(ft_isspace(s[end - 1]) && end > start)
    end--;
  size = end - start;
  trimstr = (char *)malloc((size + 1) * sizeof(char));
  if(!trimstr)
    return NULL;
  ft_strncpy(trimstr,(s + start),size);
  trimstr[size] = '\0';
  return (trimstr);
}
