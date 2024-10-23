/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countwords.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouhia <mbouhia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 09:04:21 by mbouhia           #+#    #+#             */
/*   Updated: 2024/10/23 09:04:21 by mbouhia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_countwords(char *str, char *charset)
{
	size_t	len;
	size_t	i;

	len = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] && ft_issep(str[i], charset))
			i++;
		if (str[i] && !(ft_issep(str[i], charset)))
			len++;
		while (str[i] && !(ft_issep(str[i], charset)))
			i++;
	}
	return (len);
}
