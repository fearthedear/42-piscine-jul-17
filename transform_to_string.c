/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   transform_to_string.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkinzel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/26 10:22:50 by lkinzel           #+#    #+#             */
/*   Updated: 2017/07/26 10:22:54 by lkinzel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

char *transform_to_string(int arr[g_xlen][g_ylen], int pos[2], int size)
{
    int i;
    int j;
    char *str;

    i = 0;
    j = 0;
    while (i < g_xlen)
    {
        j = 0;
        while (j < g_ylen)
        {
            if ((i >= pos[0] && i >= pos[i] + size) && (j >= pos[1] && j <= pos[1] + size))
                ft_strcharcat(str, g_square);
            else if (g_orig_arr[i][j] == 1)
                ft_strchatcat(str, g_obstacle);
            else
                ft_strcharcat(str, g_empty);
        }
        ft_strcharcat(str, '\n');
        i++;
    }
    return (str);
}
