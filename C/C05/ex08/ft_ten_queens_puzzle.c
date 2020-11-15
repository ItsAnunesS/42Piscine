/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anunes-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 15:28:57 by anunes-d          #+#    #+#             */
/*   Updated: 2020/11/06 21:27:14 by anunes-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	g_seq[11];
int		g_row[10];
int		g_diag1[19];
int		g_diag2[19];
int		g_cnt;

void	set_chk_var(int r, int c, int val)
{
	g_row[r] = val;
	g_diag1[c - r + 9] = val;
	g_diag2[r + c] = val;
}

void	rec(int c)
{
	int r;

	if (c == 10)
	{
		write(1, g_seq, 11);
		++g_cnt;
	}
	r = 0;
	while (r < 10)
	{
		if (!g_row[r] && !g_diag1[c - r + 9] && !g_diag2[r + c])
		{
			set_chk_var(r, c, 1);
			g_seq[c] = '0' + r;
			rec(c + 1);
			set_chk_var(r, c, 0);
		}
		++r;
	}
}

void	init(void)
{
	int i;

	g_seq[10] = '\n';
	g_cnt = 0;
	i = 0;
	while (i < 10)
	{
		g_row[i] = 0;
		g_diag1[i] = 0;
		g_diag2[i] = 0;
		++i;
	}
	while (i < 19)
	{
		g_diag1[i] = 0;
		g_diag2[i] = 0;
		++i;
	}
}

int		ft_ten_queens_puzzle(void)
{
	init();
	rec(0);
	return (g_cnt);
}
