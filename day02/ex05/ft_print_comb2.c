/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkinzel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 01:52:48 by lkinzel           #+#    #+#             */
/*   Updated: 2017/07/08 01:55:33 by lkinzel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_makechars(int i)
{
	ft_putchar(i / 10 + 48);
	ft_putchar(i % 10 + 48);
}

void	ft_putthem(int x, int y)
{
	if (x < 10)
	{
		ft_putchar(48);
		ft_putchar(x + 48);
	}
	else
		ft_makechars(x);
	ft_putchar(' ');
	if (y < 10)
	{
		ft_putchar(48);
		ft_putchar(y + 48);
	}
	else
		ft_makechars(y);
	if (!(x + y == 197))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print(int x, int y)
{
	if (x < y)
	{
		ft_putthem(x, y);
	}
}

void	ft_calc_numbers(int x[])
{
	while (x[0] < 100)
	{
		x[1] = 0;
		while (x[1] < 100)
		{
			ft_print(x[0], x[1]);
			x[1]++;
		}
		x[0]++;
	}
}

void	ft_print_comb2(void)
{
	int x[2];

	x[0] = 0;
	x[1] = 1;
	ft_calc_numbers(x);
}
