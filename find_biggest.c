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
    size--;
    if ((startingpos[0] + size >= g_height) || (startingpos[1] + size >= g_length))
        return (0);
	if ((arr[startingpos[0] + size][startingpos[1] + size] - arr[startingpos[0] + size][startingpos[1] - 1]
				- arr[startingpos[0] - 1][startingpos[1] + size] + arr[startingpos[0] - 1][startingpos[1] - 1]) > 0)
		return (0);
	else
		return (1);
}

int 	brute_force_valid(int **arr, int startingpos[2], int size)
{
	int row;
	int col;

	row = startingpos[0];
	col = startingpos[1];
    if (size == 1)
    {
        if (arr[row][col] == 0)
            return (1);
    }
    else
    {
        while (row < startingpos[0] + size) {
            col = startingpos[1];
            while (col < startingpos[1] + size) {
                if (arr[row][col] != 0)
                    return (0);
                col++;
            }
            row++;
        }
        return (1);
    }
    return (0);
}

void 	checkfirstrow(int **arr)
{
    int con;
    int foundfirst = 0;
	int	startingpos[2] = { 0, 0 };
	while (startingpos[1] + g_dim < g_length)
	{
        con = 1;
        while(con) {
            if (brute_force_valid(arr, startingpos, g_dim + foundfirst))
            {
                if (foundfirst)
                    g_dim++;
                g_pos[0] = 0;
                g_pos[1] = startingpos[1];
                foundfirst = 1;
            } else
            con = 0;
        }
		startingpos[1]++;
	}
}

void    checkfirstcol(int **arr)
{
    int con;
    int onthisrow;
    int startingpos[2] = { 1, 0 };
    int foundfirst = 0;

    while (startingpos[0] + g_dim < g_length)
    {
        con = 1;
        while (con)
        {
            if ((g_pos[0] == startingpos[0]) && (!foundfirst))
                onthisrow = 0;
            else
                onthisrow = 1;
            if (brute_force_valid(arr, startingpos, g_dim + onthisrow))
            {
                if (onthisrow)
                    g_dim++;
                g_pos[0] = startingpos[0];
                g_pos[1] = startingpos[1];
                foundfirst = 1;
            } else
                con = 0;
        }
        startingpos[0]++;
    }
}


void	find_biggest(int **arr, char *str_no_information)
{
	int	startingpos[2] = { 1, 1 };
    int **tab;

	g_pos[0] = 0;
	g_pos[1] = 0;
	g_dim = 0;
    int con = 1;
	while (startingpos[0] + g_dim < g_height)
	{
		startingpos[1] = 1;
		while (startingpos[1] + g_dim < g_length)
		{
            con = 1;
            while (con) {
                if (is_valid(arr, startingpos, g_dim + 1)) {
                    g_dim++;
                    g_pos[0] = startingpos[0];
                    g_pos[1] = startingpos[1];
                } else
                    con = 0;
            }
			startingpos[1]++;
		}
		startingpos[0]++;
	}

    make_it_numbers(&tab, str_no_information, g_height, 0);
	checkfirstrow(tab);
    checkfirstcol(tab);

    printf("g_pos: %d, %d\n", g_pos[0], g_pos[1]);
    printf("g_dim: %d\n", g_dim);
}
