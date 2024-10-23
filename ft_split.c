/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouhia <mbouhia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 09:04:28 by mbouhia           #+#    #+#             */
/*   Updated: 2024/10/23 14:33:12 by mbouhia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static void	*free_str(char ***strptr, size_t j)
{
	if (strptr && !(*strptr))
	{
		while (j > 0)
			free((*strptr)[--j]);
		free(*strptr);
		return (NULL);
	}
}

char	**ft_split(char *str, char c)
{
	size_t	j;
	size_t	strlen;
	char	**strptr;

	j = ft_countwords(str, c);
	strptr = (char **)malloc((j + 1) * sizeof(char *));
	if (strptr == NULL)
		return (NULL);
	j = 0;
	while (*str)
	{
		while ((*str == c) && *str != '\0')
			str++;
		if (*str == '\0')
			break ;
		strlen = ft_wordlen(str, c);
		strptr[j] = ft_strndup(str, strlen);
		if (!strptr[j])
			return (free_str(&strptr, j));
		j++;
		str += strlen;
	}
	strptr[j] = NULL;
	return (strptr);
}
