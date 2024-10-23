/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouhia <mbouhia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 09:04:33 by mbouhia           #+#    #+#             */
/*   Updated: 2024/10/23 09:04:33 by mbouhia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
