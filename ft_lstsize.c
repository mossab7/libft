/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouhia <mbouhia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 09:04:24 by mbouhia           #+#    #+#             */
/*   Updated: 2024/10/23 09:04:24 by mbouhia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int ft_lstsize(t_list *lst)
{
  int size;

  size = 0;
  while(lst)
  {
    size++;
    lst = lst -> next;
  }
  return size;
}
