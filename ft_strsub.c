/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouhia <mbouhia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 09:04:32 by mbouhia           #+#    #+#             */
/*   Updated: 2024/10/23 09:19:16 by mbouhia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdlib.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	slen;
	size_t	sublen;

	if (!s)
		return (NULL);
	slen = ft_strlen(s); 
	if(slen > start)
		sublen = slen - start;
	if(sublen > len)
		sublen = len;
	substr = (char *)malloc((len + 1) * sizeof(char));
	if (!substr)
		return (NULL);
	ft_strlcpy(substr, (s + start), sublen);
	return (substr);
}
