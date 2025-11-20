/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lekert <leonard@student42.warsaw.pl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 21:04:16 by lekert            #+#    #+#             */
/*   Updated: 2025/05/28 18:34:35 by lekert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
#include <stdio.h>

int	main(void)
{
	int xd = 15;
	int xf = 35;
	int *a = &xd;
	int *b = &xf;
	
	printf("Before ft_swap: \n");
	printf("Pointer 'a' pointed to adress %p and had value %d\n", a, *a);
	printf("Pointer 'b' pointed to adress %p and had value %d\n", b, *b);
	ft_swap(a, b);
	printf("\n");
	printf("After ft_swap: \n");
	
printf("Pointer 'a' remains pointing to %p and now has the value %d\n", a, *a);
	
printf("Pointer 'b' remains pointing to %p nad now has the value %d\n", b, *b);
}
