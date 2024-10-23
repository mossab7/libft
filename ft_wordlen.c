/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wordlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouhia <mbouhia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 09:04:33 by mbouhia           #+#    #+#             */
/*   Updated: 2024/10/23 09:19:18 by mbouhia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_wordlen(const char *str, char *charset)
{
	size_t	len;

	len = 0;
	while (*str && ft_issep(*str, charset))
		str++;
	while (*str && !ft_issep(*str, charset))
	{
		len++;
		str++;
	}
	return (len);
}
