/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lekert <leonard@student42.warsaw.pl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 17:55:55 by lekert            #+#    #+#             */
/*   Updated: 2025/05/29 17:00:52 by lekert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstr(char *str)
{
	int size;

	size = 0;
	while (str[size] != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

int	main(void)
{
	char	*s;
	
	s = "Siemano";
	ft_putstr(s);
}
