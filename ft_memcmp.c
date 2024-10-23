/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouhia <mbouhia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 09:04:25 by mbouhia           #+#    #+#             */
/*   Updated: 2024/10/23 09:04:25 by mbouhia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*S1;
	const unsigned char	*S2;

	S1 = (const unsigned char *)s1;
	S2 = (const unsigned char *)s2;
	while (n--)
	{
		if (*S1 != *S2)
		{
			return (*S1 - *S2);
		}
		S1++;
		S2++;
	}
	return (0);
}
