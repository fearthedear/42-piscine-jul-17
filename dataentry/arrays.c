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

void	ft_error();

void	ft_unknown_track(int array[][10])
{
	int unknown[2][50];
	int unknown_num;
	int x;
	int y;

	x = 0;
	y = 0;
	unknown_num = 0;
	while (y < 9)
	{
		printf("%d", array[x][y]);
		if(array[y][x] == 0)
		{
			unknown[0][unknown_num] = x;
			unknown[1][unknown_num] = y;
			unknown_num++;
		}
		x++;
		if (x == 9)
		{
			x = 0;
			y++;
		}
	}
}

int		**ft_data_entry(char **av)
{
	int x;
	int y;
	int array [10][10];

	x = 0;
	y = 0;
	while (y < 9)
	{
		if (av[y + 1][x] < 58 && av[y + 1][x] > 48)
			array[x][y] = av[y + 1][x] - 48;
		if (av[y + 1][x] == 46)
			array[x][y] = 0;
		if((av[y + 1][x] < 49 || av[y + 1][x] > 57) && (av[y + 1][x] != 46))
			ft_error();
		x++;
		if (x > 8)
		{
			x = 0;
			y++;
		}
	}
	ft_unknown_track(array);
	return (0);
}
