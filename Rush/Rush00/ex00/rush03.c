/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpimenta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 12:19:56 by fpimenta          #+#    #+#             */
/*   Updated: 2020/10/24 17:58:53 by anunes-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putchar(char value);

void	rush_end(int x)
{
	int i;
	int k;

	k = x - 2;
	i = 0;
	ft_putchar('A');
	while (i < k)
	{
		ft_putchar('B');
		i++;
	}
	if (x > 1)
		ft_putchar('C');
}

void	rush_middle(int x, int y, int z)
{
	int county;
	int count;
	int f;

	f = y - 2;
	county = 0;
	while (county < f)
	{
		count = 0;
		ft_putchar('B');
		while (count < z)
		{
			ft_putchar(' ');
			count++;
		}
		if (x > 1)
			ft_putchar('B');
		ft_putchar('\n');
		county++;
	}
}

void	rush(int x, int y)
{
	int i;
	int z;

	i = 0;
	z = x - 2;
	if (x == 0 || y == 0)
		return ;
	ft_putchar('A');
	while (i < z)
	{
		ft_putchar('B');
		i++;
	}
	if (x > 1)
		ft_putchar('C');
	ft_putchar('\n');
	if (y > 2)
		rush_middle(x, y, z);
	if (y > 1)
		rush_end(x);
}
