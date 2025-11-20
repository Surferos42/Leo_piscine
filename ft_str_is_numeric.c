/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lekert <leonard@student42.warsaw.pl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 19:28:30 by lekert            #+#    #+#             */
/*   Updated: 2025/06/03 16:19:36 by lekert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

int	ft_str_is_numeric(char *str)
{
	while (*str != '\0')
	{
		if (*str >= 48 && *str <= 57)
			++str;
		else
			return (0);
	}
	return (1);
}
/*
int	main(void)
{
	char	*str1 = "0123456789";
	char	*str2 = "o123456789";

	printf("%s Czy jest numeryczny? %d\n", str1, ft_str_is_numeric(str1));	
	printf("%s Czy jest numeryczny? %d\n", str2, ft_str_is_numeric(str2));
}*/
