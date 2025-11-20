/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lekert <leonard@student42.warsaw.pl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 23:38:55 by lekert            #+#    #+#             */
/*   Updated: 2025/05/29 16:36:53 by lekert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	size;

	size = 0;
	while (*(str + size))
		++size;
	return (size);
}

int	main()
{
	char *s;

	s = "Siemkaaaaa";
	printf("%d\n", ft_strlen(s));
}
