/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arrays.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amordret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/15 17:36:36 by amordret          #+#    #+#             */
/*   Updated: 2017/07/15 20:14:11 by amordret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_error();

void	printoutput(int array[][9]);

// void	ft_unknown_track(int array[][9])
// {
// 	int unknown[2][50];
// 	int unknown_num;
// 	int x;
// 	int y;

// 	x = 0;
// 	y = 0;
// 	unknown_num = 0;
// 	while (y < 9)
// 	{
// 		//printf("%d", array[x][y]);
// 		if(array[y][x] == 0)
// 		{
// 			unknown[0][unknown_num] = x;
// 			unknown[1][unknown_num] = y;
// 			unknown_num++;
// 		}
// 		x++;
// 		if (x == 9)
// 		{
// 			x = 0;
// 			y++;
// 		}
// 	}
// }

void		ft_data_entry(char **av, int array[][9])
{
	int x;
	int y;
//	int array [10][10];

	x = 0;
	y = 0;
	while (x < 9)
	{
		y = 0;
		while (y < 9)
		{
			if (av[x + 1][y] < 58 && av[x + 1][y] > 48)
				array[x][y] = av[x + 1][y] - 48;
			else if (av[x + 1][y] == 46)
				array[x][y] = 0;
			else
				ft_error();
			y++;
		}
		x++;
	}
}
