/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jboniwel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/26 10:46:12 by jboniwel          #+#    #+#             */
/*   Updated: 2017/07/26 14:01:38 by lkinzel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int		check(char *str)
{
	int i;
	int count_returns;
	int temp_length;
	int temp_count;

	i = 0;
	count_returns = 0;
	temp_length = 0;
	temp_count = 0;
	while (str[i] != 0)
	{
		if (str[i] != g_empty && str[i] != g_obstacle && str[i] != '\n')
			return (0);
		if (str[i] == '\n')
			count_returns++;
        i++;
	}
    if (count_returns != g_height)
        return (0);
	i = 0;
	while (str[i] != '\n')
	{
		temp_length++;
		i++;
	}
	i++;
	while (str[i] != '\0')
	{
		temp_count++;
		if (str[i] == '\n')
		{
			if (temp_length - (temp_count - 1) != 0)
				return (0);
			temp_count = 0;
		}
		i++;
	}
	return (1);
}

char	*get_information(char *str)
{
	int 	i;
	int 	j;
	char 	*new_str;

	i = 0;
	j = 0;
	new_str = (char*)malloc(sizeof(char) * ft_strlen(str));
	i = 0;
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
	while (new_str[g_length] != '\n')
		g_length++;
    new_str[j] = 0;
	if (check(new_str) == 0)
    {
        ft_putstr("map error\n");
        return ("error");
    }
	else
    {
        return (new_str);
    }
}
