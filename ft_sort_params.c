/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lekert <leonard@student42.warsaw.pl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 20:45:20 by lekert            #+#    #+#             */
/*   Updated: 2025/06/01 20:53:35 by lekert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int str_cmp(char *s1, char *s2)
{
	int i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	put_str(char *str)
{
	while (*str)
		write(1, str++, 1);
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	int i = 1;
	char *tmp;

	while (i <argc - 1)
	{
		if(str_cmp(argv[i], argv[i + 1]) > 0)
		{
		tmp = argv[i];
		argv[i] = argv[i + 1];
		argv[i + 1] = tmp;
		i = 1;
		}
	else
		i++;
	}
	i = 1;
	while (i < argc)
		put_str(argv[i++]);
	return (0);
}
