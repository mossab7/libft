#include <string.h>

const char *ft_strrchr(const char *str, int c)
{
  const char *ptr;
  ptr = NULL;
  while(*str)
  {
    if(*str == (char)c)
      ptr = str;
 
    str++;
  }
  if ((char)c == '\0')
    return str;
  return ptr;
}
