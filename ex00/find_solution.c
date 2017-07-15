/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_solution.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkinzel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/15 19:23:27 by lkinzel           #+#    #+#             */
/*   Updated: 2017/07/15 22:56:03 by lkinzel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		valid(int i, int j, int value, int arr[][9])
{
	// row
	int k = 0;

	while(k < 9)
	{
		if (value == arr[k][j])
			return (0);
		k++;
	}

	// col
	k = 0;
	while (k < 9)
	{
		if (value == arr[i][k])
			return (0);
		k++;
	}

	// box
	int boxrowoffset = (i / 3) * 3;
	int boxcoloffset = (j / 3) * 3;
	k = 0;
	int m = 0;
	while (k < 3)
	{
		while (m < 3)
		{
			if (value == arr[boxrowoffset+k][boxcoloffset+m])
				return (0);
			m++;
		}
		k++;
	}	
	return (1);
}

int		solve(int i, int j, int arr[][9])
{
	if (i == 9)
	{
		if (i == 9)
			i = 0;
		if (j++ == 9)
			return (1);
	}
	if (arr[i][j] != 0) //skip filled cells
		return (solve(i+1, j, arr));

	int value = 1;
	while (value <= 9)
	{
		if (valid(i, j, value, arr))
		{
			arr[i][j] = value;
			if (solve(i+1, j, arr))
				return (1);
		}
		value++;
	}
	arr[i][j] = 0; //reset the backtrack
	return (0);
}


