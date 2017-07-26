/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jboniwel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/26 10:46:12 by jboniwel          #+#    #+#             */
/*   Updated: 2017/07/26 11:52:23 by jboniwel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	get_information(char *str)
{
	int 	i;
	int 	j;
	char 	*new_str;
    int     **tab;

	i = 0;
	j = 0;
	while (str[i] != 0)
		i++;
	new_str = (char*)malloc(sizeof(char) * i);
	i = 0;
	g_strlength = i;
	while (str[i] >= '0' && str[i] <= '9')
		i++;
	g_height = ft_atoi(str);
	g_empty = str[i];
	i++;
	g_obstacle = str[i];
	i++;
	g_square = str[i];
	i += 2;
	while (str[i] != 0)
	{
		new_str[j] = str[i];
		i++;
		j++;
	}
	make_it_numbers(&tab, new_str, g_height);
    ft_putstr("\narray with calculated numbers, passed back to get_information():\n");
    show(tab, g_height, g_length);
}
