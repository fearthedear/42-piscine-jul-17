/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_biggest.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkinzel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/26 00:08:37 by lkinzel           #+#    #+#             */
/*   Updated: 2017/07/26 02:27:48 by lkinzel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"
#include <stdio.h>

int g_arr[5][5] = {
	{ 0,0,0,0,1 },
	{ 0,0,1,1,2 },
	{ 0,1,2,3,4 },
	{ 0,1,2,4,5 },
	{ 0,1,3,5,6 },
};


int x_len = 5;
int y_len = 5;
int g_pos[2] = { 0, 0 };
int g_dim = 0;

int		is_valid(int startingpos[2], int size)
{
	if ((g_arr[startingpos[0] + size][startingpos[1] + size] - g_arr[startingpos[0] + size][startingpos[0]]
				- g_arr[startingpos[0]][startingpos[1] + size] + g_arr[startingpos[0]][startingpos[1]]) > 0)
		return (0);
	else
		return (1);
}

void	find_biggest(void)
{
	int	startingpos[2] = { 0, 0 };

	g_dim = 1;
	while (startingpos[0] + g_dim < x_len)
	{
		startingpos[1] = 0;	
		while (startingpos[1] + g_dim < y_len)
		{
			while (is_valid(startingpos, g_dim))
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
}

int main()
{
	find_biggest();
	printf("%d\n", g_dim);
}
