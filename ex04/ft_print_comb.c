/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkinzel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 02:06:42 by lkinzel           #+#    #+#             */
/*   Updated: 2017/07/06 23:43:19 by lkinzel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_commas(void)
{
	ft_putchar(',');
	ft_putchar(' ');
}

void	ft_print_comb(void)
{
	int x[3];

	x[0] = 48;
	while (x[0] < 58)
	{
		x[1] = 48;
		while (x[1] < 58)
		{
			x[2] = 48;
			while (x[2] < 58)
			{
				if (x[0] < x[1] && x[1] < x[2])
				{
					ft_putchar(x[0]);
					ft_putchar(x[1]);
					ft_putchar(x[2]);
					if (x[0] != 55)
						ft_commas();
				}
				x[2]++;
			}
			x[1]++;
		}
		x[0]++;
	}
}
