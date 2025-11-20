/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lekert <leonard@student42.warsaw.pl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 18:29:35 by lekert            #+#    #+#             */
/*   Updated: 2025/06/03 16:19:27 by lekert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'A' && str[i] <= 'Z')
				|| (str[i] >= 'a' && str[i] <= 'z')))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	char	*str1 = "Nocotamm00rdzia?";
	char	*str2 = "Witamwszystkich";

	printf("Czy tekst 1 jest alfa?%s %d\n", str1, ft_str_is_alpha(str1));
	printf("Czy tekst 2 jest alfa?%s %d\n", str2, ft_str_is_alpha(str2));
}*/
