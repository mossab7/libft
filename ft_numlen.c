/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouhia <mbouhia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 09:04:26 by mbouhia           #+#    #+#             */
/*   Updated: 2024/10/23 09:04:26 by mbouhia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	ft_numlen(int n)
{
	long	nb;
	int		sign;
	size_t	len;

	nb = n;
	sign = (n < 0);
	len = 0;
	if (nb == 0)
		return (1);
	if (sign)
		nb = -nb;
	while (nb)
	{
		len++;
		nb /= 10;
	}
	return (len + sign);
}
