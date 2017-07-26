/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_biggest.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkinzel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/26 00:08:37 by lkinzel           #+#    #+#             */
/*   Updated: 2017/07/26 02:28:47 by lkinzel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int		is_valid(int **arr, int startingpos[2], int size)
{
    if ((startingpos[0] + size > g_height) || (startingpos[1] + size > g_length))
        return (0);
	if ((arr[startingpos[0] + size][startingpos[1] + size] - arr[startingpos[0] + size][startingpos[0]]
				- arr[startingpos[0]][startingpos[1] + size] + arr[startingpos[0]][startingpos[1]]) > 0)
		return (0);
	else
		return (1);
}

void	find_biggest(int **arr)
{
	show(arr, 0,0);
	int	startingpos[2] = { 0, 0 };
	g_pos[0] = 0;
	g_pos[1] = 0;
	g_dim = 1;
	while (startingpos[0] + g_dim < g_height)
	{
		startingpos[1] = 0;
		while (startingpos[1] + g_dim < g_length)
		{
			while (is_valid(arr, startingpos, g_dim))
			{
				g_dim++;
				g_pos[0] = startingpos[0];
				g_pos[1] = startingpos[1];
			}
			startingpos[1]++;
		}
		startingpos[0]++;
	}
	g_dim--;
    printf("%d\n", g_dim);
}
