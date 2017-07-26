/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   transform_array.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jboniwel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/25 11:58:54 by jboniwel          #+#    #+#             */
/*   Updated: 2017/07/26 10:45:38 by jboniwel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int		find_length(char *str, int height)
{
	int l;

	l = 0;
	while (str[l] != '\n')
		l++;
	return (l);
}

int		transform(char src)
{
	if (src == g_obstacle)
		return (0);
	else
		return (1);
}

void	fill(int **tab, int height, int length)
{
	int i;
	int j;

	i = 0;
	j = 1;
	while (j < length)
	{
		tab[i][j] += tab[i][j - 1];
		j++;
	}
	j = 0;
	i = 1;
	while (i < height)
	{
		tab[i][j] += tab[i - 1][j];
		i++;
	}
	i = 1;
	while (i < height)
	{
		j = 1;
		while (j < length)
		{
			tab[i][j] += tab[i - 1][j] + tab[i][j - 1] - tab[i - 1][j - 1];
			j++;
		}
		i++;
	}
}

void	show(int **tab, int height, int length)
{
	int i;
	int j;

	i = 0;
	while (i < height)
	{
		j = 0;
		while (j < length)
		{
			printf("%d", tab[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}
}

int		**make_it_numbers(char *array, int height)
{
	int **tab;
	int i;
	int j;
	int k;
	int length;

	i = 0;
	k = 0;
	tab = (int**)malloc(height * sizeof(int*));
	length = find_length(array, height);
	while (array[i] != 0)
	{
		j = 0;
		tab[k] = (int*)malloc(length * sizeof(int));
		while (array[i] != '\n')
		{
			tab[k][j] = transform(array[i]);
			i++;
			j++;
		}
		k++;
		i++;
	}
	show(tab, height, length);
	printf("\n");
	g_orig_array = tab;
	fill(tab, height, length);
	show(tab, height, length);
	return (tab);
}
