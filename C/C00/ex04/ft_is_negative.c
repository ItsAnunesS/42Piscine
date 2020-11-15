/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anunes-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/23 11:44:09 by anunes-d          #+#    #+#             */
/*   Updated: 2020/10/23 12:07:42 by anunes-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_is_negative(int n)
{
	char ans;

	if (n < 0)
	{
		ans = 'N';
		write(1, &ans, 1);
	}
	else
	{
		ans = 'P';
		write(1, &ans, 1);
	}
}