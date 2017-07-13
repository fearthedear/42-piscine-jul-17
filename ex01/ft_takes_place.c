/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkinzel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 17:47:59 by lkinzel           #+#    #+#             */
/*   Updated: 2017/07/13 18:59:54 by lkinzel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_takes_place(int hour)
{
	char	ampm;
	int		late;

	if (hour == 24)
		hour -= 24;
	late = hour > 11 ? 1 : 0;
	ampm = late ? 80 : 65;
	printf("%s", "THE FOLLOWING TAKES PLACE BETWEEN ");
	if (hour > 12)
		printf("%d", hour - 12);
	else
		printf("%d", (hour == 0) ? hour + 12 : hour);
	printf(".00 %cM AND ", ampm);
	if (hour == 11)
		ampm = 80;
	else if (hour == 23)
		ampm = 65;
	if (late)
		printf("%d", hour - 11);
	else
		printf("%d", hour + 1);
	printf(".00 %cM\n", ampm);
}
