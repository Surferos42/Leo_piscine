/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lekert <leonard@student42.warsaw.pl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 19:55:34 by lekert            #+#    #+#             */
/*   Updated: 2025/06/04 00:51:03 by lekert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && (s1[i] || s2[i]))
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	char str1[] = "lata";
	char str2[] = "laTa";
	unsigned int n = 3;
	int	result;
	
	result = ft_strncmp(str1, str2, n);
	
	if (result == 0)
		printf("Pierwsze %u znaki sa takie same\n", n);
	else
		printf("Roznica na miejscu %u: %d\n", n, result);
}*/
