#include <string.h>
const char *ft_strchr(const char *str, int c)
{
  while(*str)
  {
    if(*str == (char)c)
      return str;
    str++;
  }
  return NULL;
}
