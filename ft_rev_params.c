/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lekert <leonard@student42.warsaw.pl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 20:39:53 by lekert            #+#    #+#             */
/*   Updated: 2025/06/01 20:43:31 by lekert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
	int	main(int argc, char **argv)
	{
		int i = argc - 1;
		int j;
		
		while (i > 0)
		{
			j = 0;
			while (argv[i][j])
			{
				write(1, &argv[i][j], 1);
				j++;
			}
			write(1, "\n", 1);
			i--;
		}	
		return 0;
}
