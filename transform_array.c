/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   transform_array.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jboniwel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/25 11:58:54 by jboniwel          #+#    #+#             */
/*   Updated: 2017/07/25 12:20:57 by lkinzel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int		array_is_valid(char **tab)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (tab[1][i] != '\n')
		i++;
	while (tab[j] != 0)
		j++;
	if (i == j)
		return (1);
	else
		return (0);
}

int g_i = 0;

int g_j = 0;

int		**make_it_dank(char **array, int height, int length)
{
	int **tab;
	
	if (array_is_valid(array) == 0)
		ft_putstr("map error\n");
		return (0);
	tab = (int**)malloc(height * sizeof(int*));
}
