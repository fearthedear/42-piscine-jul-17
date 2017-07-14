/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unmatch.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkinzel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 13:51:38 by lkinzel           #+#    #+#             */
/*   Updated: 2017/07/14 14:25:28 by lkinzel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_unmatch(int *tab, int length)
{
	int	i;
	int x;
	int	c;
	int	count;

	i = 0;
	while (i < length)
	{
		x = 0;
		c = tab[i];
		count = 0;
		while (x < length)
		{
			if (tab[x] == c)
				count++;
			x++;
		}
		if (count % 2 == 1)
			return (tab[i]);
		i++;
	}
	return (0);
}
