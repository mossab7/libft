/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   l.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouhia <mbouhia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 09:04:34 by mbouhia           #+#    #+#             */
/*   Updated: 2024/10/23 09:19:19 by mbouhia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_print_result(char const *s)
{
	int	len;

	len = 0;
	while (s[len])
		len++;
	write(1, s, len);
}

int	main(int argc, const char *argv[])
{
	char	str[] = "lorem ipsum dolor sit amet";
	char	*strsub;
	int		arg;
		char *bullshit;

	if (argc == 1)
		return (0);
	else if ((arg = atoi(argv[1])) == 1)
	{
		if (!(strsub = ft_substr(str, 0, 10)))
			ft_print_result("NULL");
		else
			ft_print_result(strsub);
		if (str == strsub)
			ft_print_result("\nA new string was not returned");
	}
	else if (arg == 2)
	{
		if (!(strsub = ft_substr(str, 7, 10)))
			ft_print_result("NULL");
		else
			ft_print_result(strsub);
		if (str == strsub)
			ft_print_result("\nA new string was not returned");
	}
	else if (arg == 3)
	{
		if (!(strsub = ft_substr(str, 7, 0)))
			ft_print_result("NULL");
		else
			ft_print_result(strsub);
		if (str == strsub)
			ft_print_result("\nA new string was not returned");
	}
	else if (arg == 4)
	{
		if (!(strsub = ft_substr(str, 0, 0)))
			ft_print_result("NULL");
		else
			ft_print_result(strsub);
		if (str == strsub)
			ft_print_result("\nA new string was not returned");
	}
	else if (arg == 5)
	{
		if (!(strsub = ft_substr(str, 400, 20)))
			ft_print_result("NULL");
		else
		{
			bullshit = (char *)&strsub[30];
			bullshit = "FULL BULLSHIT";
			if (strsub)
				ft_print_result(strsub);
			else
				ft_print_result("rip");
		}
		if (str == strsub)
			ft_print_result("\nA new string was not returned");
		(void)bullshit;
	}
	return (0);
}
