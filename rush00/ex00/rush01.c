/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkinzel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 15:54:20 by lkinzel           #+#    #+#             */
/*   Updated: 2017/07/08 19:26:08 by lkinzel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int g_y = 0;

void	ft_assignchar(int row, char *s, char *m, char *e)
{
	if (row == 0)
	{
		*s = '/';
		*m = '*';
		*e = '\\';
	}
	else if (row < g_y - 1)
	{
		*s = '*';
		*m = ' ';
		*e = '*';
	}
	else
	{
		*s = '\\';
		*m = '*';
		*e = '/';
	}
}

void	ft_putrow(int x, int row)
{
	int		middle_characters;
	char	s;
	char	m;
	char	e;

	ft_assignchar(row, &s, &m, &e);
	middle_characters = x - 2;
	if (x > 1)
	{
		ft_putchar(s);
		while (middle_characters > 0)
		{
			ft_putchar(m);
			middle_characters--;
		}
		ft_putchar(e);
		ft_putchar('\n');
	}
	else
	{
		ft_putchar(s);
		ft_putchar('\n');
	}
}

void	rush(int x, int y)
{
	int row;

	g_y = y;
	row = 0;
	if (x > 0 && g_y > 0)
	{
		while (row < g_y)
		{
			ft_putrow(x, row);
			row++;
		}
	}
}
