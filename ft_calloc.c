/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouhia <mbouhia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 09:04:20 by mbouhia           #+#    #+#             */
/*   Updated: 2024/10/23 09:23:46 by mbouhia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*memoryarea;
	size_t	fullsize;

	if (nmemb == 0 || size == 0)
	{
		nmemb = 1;
		size = 1;
	}
	fullsize = nmemb * size;
	memoryarea = malloc(fullsize);
	if (!memoryarea)
		return (NULL);
	ft_bzero(memoryarea, fullsize);
	return (memoryarea);
}
