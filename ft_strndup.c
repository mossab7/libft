/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouhia <mbouhia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 09:04:31 by mbouhia           #+#    #+#             */
/*   Updated: 2024/10/23 09:18:50 by mbouhia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strndup(const char *src, size_t size)
{
	char	*dest;

	dest = (char *)malloc((size + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	ft_strncpy(dest, src, size);
	return (dest);
}
