/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lekert <leonard@student42.warsaw.pl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 20:20:45 by lekert            #+#    #+#             */
/*   Updated: 2025/06/03 16:19:57 by lekert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

int	ft_str_is_uppercase(char *str)
{
	while (*str != '\0')
	{
		if (*str >= 65 && *str <= 90)
			++str;
		else
			return (0);
	}
	return (1);
}
/*
int	main(void)
{
	char	*str1 = "LOLOLOL";
	char	*str2 = "loloLOL";

	printf("%s %d\n", str1, ft_str_is_uppercase(str1));
	printf("%s %d\n", str2, ft_str_is_uppercase(str2));
}*/
