/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkinzel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 11:09:08 by lkinzel           #+#    #+#             */
/*   Updated: 2017/07/08 11:41:12 by lkinzel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_assignchars(int x, int y, int row, char *s, char *m, char *e)
{
	if (row == 0)
	{
		*s = 'A';
		*m = 'B';
		*e = 'C';
	}
	else if (row < y)
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

void	ft_putrow(int x, int y, int row)
{
	int a;
	char s;
	char m;
	char e;

	ft_assignchars(x, y, row, &s, &m, &e);
	a = x-2;

	// printing start of line
	ft_putchar(s);

	// printing middle of line
	while (a > 0)
	{
		ft_putchar(m);
		a--;
	}

	// printing end of line
	ft_putchar(e);
	ft_putchar('\n');
}


void	rush(int x, int y)
{	
	int a;

	a = 0;
	if (x > 0 && y > 0)
	{
		while (a <= y)
		{
			ft_putrow(x, y, a);
			a++;
		}
	}
}
