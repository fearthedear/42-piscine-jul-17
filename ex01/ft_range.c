/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkinzel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/18 09:33:35 by lkinzel           #+#    #+#             */
/*   Updated: 2017/07/19 15:44:53 by lkinzel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	i;

	if (min >= max)
	{
		range = NULL;
		return (range);
	}
	i = min;
	range = (int*)malloc(sizeof(int) * (max - min));
	while (min < max)
	{
		range[min - i] = min;
		min++;
	}
	return (range);
}
