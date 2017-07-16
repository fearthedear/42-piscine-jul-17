/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arrays.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amordret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/15 17:36:36 by amordret          #+#    #+#             */
/*   Updated: 2017/07/16 13:57:16 by amordret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_error();

int	ft_check_line(int array[][9], int y)
{
	int x;
	int i;
	int found;

	i = 1;
	x = 0;
	found = 0;
	while (i < 10)
	{
		while (x < 9)
		{
			if (array[x][y] == i)
				found++;
			x++;
		}
		if (found > 1)
			return (ft_error());
		found = 0;
		x = 0;
		i++;
	}
	return (1);
}

int	ft_check_row(int array[][9], int x)
{
	int y;
	int i;
	int found;

	i = 1;
	y = 0;
	found = 0;
	while (i < 10)
	{
		while (y < 9)
		{
			if (array[x][y] == i)
				found++;
			y++;
		}
		if (found > 1)
			return (ft_error());
		found = 0;
		y = 0;
		i++;
	}
	return (1);
}

int	ft_check_data_entry(int array[][9])
{
	int x;
	int y;

	y = 0;
	x = 0;
	while (y < 9)
	{
		if (ft_check_line(array, y) == 99)
			return (99);
		y++;
	}
	while (x < 9)
	{
		if (ft_check_row(array, x) == 99)
			return (99);
		x++;
	}
	return (1);
}

int	ft_check_only_one_sol(int array[][9])
{
	int x;
	int y;
	int fixed_nums;

	x = 0;
	y = 0;
	fixed_nums = 0;
	while (y < 9)
	{
		x = 0;
		while (x < 9)
		{
			if (array[x][y] != 0)
				fixed_nums++;
			x++;
		}
		y++;
	}
	if (fixed_nums > 16)
		return (1);
	return (ft_error());
}

int	ft_data_entry(char **av, int array[][9])
{
	int x;
	int y;

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
				return (ft_error());
			y++;
		}
		if (av[x + 1][y] != '\0')
			return (ft_error());
		x++;
	}
	return (1);
}
