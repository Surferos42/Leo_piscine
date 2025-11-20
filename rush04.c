/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lekert <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 11:35:23 by lekert            #+#    #+#             */
/*   Updated: 2025/05/19 11:39:25 by lekert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int	i;
	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}
void	ft_print(int columns, char first, char between, char last)
{
	int	i;
	i = 1;
	while (i <= columns)
	{
		if (i == 1)
			ft_putchar(first);
		else if (i == columns)
			ft_putchar(last);
		else
			ft_putchar(between);
		i++;
	}
	ft_putchar('\n');
}
void	rush(int x, int y)
{
	int	i;
	int	column;
	int	line;
	if (x < 1 || y < 1)
	{
		ft_putstr("Please use positive numbers\n");
		return;
	}
	i = 1;
	column = x;
	line = y;
	while (i <= line)
	{
		if (i == 1)
			ft_print(column, 'A', 'B', 'C');
		else if (i == line)
			ft_print(column, 'C', 'B', 'A');
		else
			ft_print(column, 'B', ' ', 'B');
		i++;
	}
}
