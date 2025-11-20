/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lekert <leonard@student42.warsaw.pl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 17:42:48 by lekert            #+#    #+#             */
/*   Updated: 2025/06/02 21:44:56 by lekert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void    ft_sort_int_tab(int *tab, int size)
{
	int     i;
	int     temp;
		
	i = 0;
	while (i < size - 1)
	{
		if (tab[i] > tab[i + 1])
		{
			temp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = temp;
			i = 0;
		}
		else
			i++;
	}
}

int     main(void)
{
	int     tab[] = {5, 3, 2, 4, 1};
	int     size = 5;

	for (int i = 0; i < size; i++)
	printf("%d\n", tab[i]);
	ft_sort_int_tab(tab, size);
}
