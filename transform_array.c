/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   transform_array.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jboniwel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/25 11:58:54 by jboniwel          #+#    #+#             */
/*   Updated: 2017/07/26 02:28:07 by jboniwel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int		array_is_valid(char *str)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	k = 0;
	while (str[k] != '\n')
		k++;
	while (str[i] != '\0')
	{
		if (str[i] == '\n')
			j++;
		i++;
	}
	if (k == j)
		return (1);
	else
		return (0);
}

int		transform(char src)
{
	if (src == '.')
		return (0);
	else
		return (1);
}

void	fill(int **tab, int height)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (++j < height)
		tab[i][j] += tab[i][j - 1];
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
		while (j < height)
		{
			tab[i][j] += tab[i - 1][j] + tab[i][j - 1] - tab[i - 1][j - 1];
			j++;
		}
		i++;
	}
}

void	show(int **tab, int height)
{
	int i;
	int j;

	i = 0;
	while (i < height)
	{
		j = 0;
		while (j < height)
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

	i = 0;
	k = 0;
	tab = (int**)malloc(height * sizeof(int*));
	while (array[i] != 0)
	{
		j = 0;
		tab[k] = (int*)malloc(height * sizeof(int));
		while (array[i] != '\n')
		{
			tab[k][j] = transform(array[i]);
			i++;
			j++;
		}
		k++;
		i++;
	}
	return (tab);
}
