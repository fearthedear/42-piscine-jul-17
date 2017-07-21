/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkinzel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/18 10:42:21 by lkinzel           #+#    #+#             */
/*   Updated: 2017/07/18 17:09:57 by lkinzel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int *arr;

	if (min >= max)
	{
		range = NULL;
		return (0);
	}
	arr = (int*)malloc(sizeof(int) * (max - min));
	i = min;
	while (min < max)
	{
		arr[min - i] = min;
		min++;
	}
	*range = arr;
	return (max - i);
}
