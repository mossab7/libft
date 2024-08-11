#include <string.h>
void *ft_memmove(void *dest, const void *src, size_t n)
{
  unsigned char *d;
  unsigned char *s;
  d = (unsigned char *)dest;
  s = (unsigned char *)src;
  if(s == d || n == 0)
    return dest;
  if(d < s)
  {
    while(n--)
    {
      *d++ = *s++;
    }
  }
  else 
  {
    d += n;
    s += n;
    while(n--)
    {
      *(--d) = *(--s);
    }
  }
  return dest;
}
