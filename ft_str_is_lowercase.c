/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lekert <leonard@student42.warsaw.pl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 20:20:18 by lekert            #+#    #+#             */
/*   Updated: 2025/06/03 16:19:48 by lekert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

int	ft_str_is_lowercase(char *str)
{
	while (*str != '\0')
	{
		if (*str >= 97 && *str <= 122)
			++str;
		else
			return (0);
	}
	return (1);
}
/*
int	main(void)
{
	char	*str1 = "siemanonocotam";
	char	*str2 = "omgomgOMGomg";
	
	printf("%s %d\n", str1, ft_str_is_lowercase(str1));
	printf("%s %d\n", str2, ft_str_is_lowercase(str2));
}*/
