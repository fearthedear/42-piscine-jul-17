/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 21:03:13 by exam              #+#    #+#             */
/*   Updated: 2017/07/07 21:48:33 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(const char *str)
{
	int i;
	int l;
	int b;
	int m;

	i = 0;
	b = 1;

	while (b)
	{
		if (str[i] == '\0')
		{
			b = 0;
			l = i;
		}
		i++;
	}
	
	if (l == 1)
	{
		int o;
		o = str[0];
		if (o < 48 || o > 57)
		{
			return (0);
		}
		else {
			return (o-48);
		}
	}

	int f = l;
	f = f -2;
	m = 10;
	while (f > 0)
	{
		m = m * 10;
		f--;
	}
	int total;
	int x = 0;
	total = 0;
	while (x < l)
	{
		int y;
		y = str[x];
		if (y < 48 || y > 58)
		{
			return (0);
		}
		else
		{
			if (m > 1)
			{
				total = total + ((y - 48) * m);
			}
			else
			{
				total = total + (y - 48);
			}
		}
		m /= 10;
		x++;
	}

	return (total);
}
