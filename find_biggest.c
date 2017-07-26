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

int g_arr[5][5] = {
	{ 0,0,0,0,1 },
	{ 0,0,1,1,2 },
	{ 0,1,2,3,4 },
	{ 0,1,2,4,5 },
	{ 0,1,3,5,6 },
};


int g_pos[2] = { 0, 0 };
int g_dim = 0;

int		is_valid(int arr[g_height][g_length], int startingpos[2], int size)
{
	if ((arr[startingpos[0] + size][startingpos[1] + size] - arr[startingpos[0] + size][startingpos[0]]
				- arr[startingpos[0]][startingpos[1] + size] + arr[startingpos[0]][startingpos[1]]) > 0)
		return (0);
	else
		return (1);
}

void	find_biggest(int arr[g_height][g_length])
{
	int	startingpos[2] = { 0, 0 };
	g_height = 5;
	g_length = 5;

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
}

int main()
{
	find_biggest(g_arr);
	printf("%d\n", g_dim);
}
