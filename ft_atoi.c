/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouhia <mbouhia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 09:04:20 by mbouhia           #+#    #+#             */
/*   Updated: 2024/10/23 09:04:20 by mbouhia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int ft_atoi(const char *str)
{
  int sign;
  int result;
  sign = 1;
  result = 0;
  while(ft_isspace(*str))
    str++;
  if(*str == '-' || *str == '+')
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
