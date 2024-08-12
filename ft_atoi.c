#include "libft.h"
int ft_atoi(const char *str)
{
  int sign;
  int result;
  sign = 1;
  result = 0;
  while(ft_isspace(*str))
    str++;
  while(*str == '-' || *str == '+')
  {
    if(*str == '-')
      sign *= -1;
    str++;
  }
  while(ft_isdigit(*str))
  {
    result = (result * 10) + (*str - '0');
    str++;
  }
  return (result * sign);
}