/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkinzel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 11:09:08 by lkinzel           #+#    #+#             */
/*   Updated: 2017/07/08 12:51:32 by lkinzel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_assignchars(int y, int row, char *s, char *m, char *e)
{
	if (row == 0)
	{
		*s = 'A';
		*m = 'B';
		*e = 'C';
	}
	else if (row < y - 1)
	{
		*s = 'B';
		*m = ' ';
		*e = 'B';
	}
	else
	{
		*s = 'C';
		*m = 'B';
		*e = 'A';
	}
}

void	ft_putsingle(int x, char s)
{
	if (x == 1)
		ft_putchar(s);
	ft_putchar('\n');
}

void	ft_putrow(int x, int y, int row)
{
	int		a;
	char	s;
	char	m;
	char	e;

	ft_assignchars(y, row, &s, &m, &e);
	a = x - 2;
	if (x > 1)
	{
		ft_putchar(s);
		while (a > 0)
		{
			ft_putchar(m);
			a--;
		}
		ft_putchar(e);
		ft_putchar('\n');
	}
	else
		ft_putsingle(x, s);
}

void	rush(int x, int y)
{
	int a;

	a = 0;
	if (x > 0 && y > 0)
	{
		while (a < y)
		{
			ft_putrow(x, y, a);
			a++;
		}
	}
}
