/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_solution.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkinzel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/15 19:23:27 by lkinzel           #+#    #+#             */
/*   Updated: 2017/07/16 12:11:04 by amordret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	valid_row(int y, int value, int arr[][9])
{
	int x;

	x = 0;
	while (x < 9)
	{
		if (value == arr[x][y])
			return (0);
		x++;
	}
	return (1);
}

int	valid_col(int x, int value, int arr[][9])
{
	int y;

	y = 0;
	while (y < 9)
	{
		if (value == arr[x][y])
			return (0);
		y++;
	}
	return (1);
}

int	valid_box(int x, int y, int value, int arr[][9])
{
	int boxrowoffset;
	int boxcoloffset;
	int i;
	int j;

	boxrowoffset = (x / 3) * 3;
	boxcoloffset = (y / 3) * 3;
	i = 0;
	j = 0;
	while (i < 3)
	{
		while (j < 3)
		{
			if (value == arr[boxrowoffset + i][boxcoloffset + j])
				return (0);
			j++;
		}
		i++;
		j = 0;
	}
	return (1);
}

int	valid(int i, int j, int value, int arr[][9])
{
	if (valid_row(j, value, arr) == 0)
		return (0);
	if (valid_col(i, value, arr) == 0)
		return (0);
	if (valid_box(i, j, value, arr) == 0)
		return (0);
	return (1);
}

int	solve(int x, int y, int arr[][9])
{
	int value;

	if (x == 9)
	{
		if (x == 9)
			x = 0;
		if (y++ == 9)
			return (1);
	}
	if (arr[x][y] != 0)
		return (solve(x + 1, y, arr));
	value = 1;
	while (value <= 9)
	{
		if (valid(x, y, value, arr))
		{
			arr[x][y] = value;
			if (solve(x + 1, y, arr))
				return (1);
		}
		value++;
	}
	arr[x][y] = 0;
	return (0);
}
