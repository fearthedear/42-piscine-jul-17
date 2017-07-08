/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkinzel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 12:43:24 by lkinzel           #+#    #+#             */
/*   Updated: 2017/07/09 01:54:04 by lkinzel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_printnbr(int x[])
{
	int i;
	int b;

	i = 0;
	b = 0;
	while (i < 10)
	{
		if (b == 1)
		{
			ft_putchar(x[i] + 48);
		}
		else
		{
			if (x[i] > 0)
			{
				b = 1;
				ft_putchar(x[i] + 48);
			}
		}
		i++;
	}
}

void	ft_preventoverflow(void)
{
	ft_putchar('-');
	ft_putchar('2');
	ft_putchar('1');
	ft_putchar('4');
	ft_putchar('7');
	ft_putchar('4');
	ft_putchar('8');
	ft_putchar('3');
	ft_putchar('6');
	ft_putchar('4');
	ft_putchar('8');
}

void	ft_fillarray(int x[], int nb)
{
	int t;

	t = 9;
	while (t >= 0)
	{
		x[t] = nb % 10;
		nb /= 10;
		t--;
	}
}

void	ft_putnbr(int nb)
{
	int x[10];

	if (nb == 0)
		ft_putchar('0');
	else
	{
		if (nb == -2147483648)
			ft_preventoverflow();
		else
		{
			if (nb < 0)
			{
				ft_putchar('-');
				nb = nb + -2 * nb;
			}
			ft_fillarray(x, nb);
			ft_printnbr(x);
		}
	}
}
