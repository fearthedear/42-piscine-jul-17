/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkinzel <lkinzel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 16:18:31 by lkinzel           #+#    #+#             */
/*   Updated: 2017/07/09 23:42:02 by lkinzel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int g_rows = 0;
int g_n = 0;
int g_n_uneven = 0;

void	ft_putchar(char c);

int		ft_r_w(int n, int row)
{
	int row_width;
	int add;
	int step;
	int step_init;
	int c;
	int added;

	c = 1;
	added = 0;
	row_width = 3 + (row - 1) * 2;
	add = 4;
	step = 3;
	step_init = 3;
	while (c <= row)
	{
		if (c == step + 1)
		{
			if (added != 0 && added % 2 == 0)
				add += 2;
			row_width += add;
			step += step_init + 1;
			step_init++;
			added++;
		}
		c++;
	}
	return (row_width);
}

void	with_doorknob(int o, int door_width, int cr)
{
	if (cr == g_rows - door_width / 2 && o == door_width - 2)
		ft_putchar('$');
	else
		ft_putchar('|');
}

void	row_with_door(int n, int cr, int o)
{
	int door_width;

	door_width = n;
	if (door_width % 2 == 0)
		door_width--;
	while (o < ((ft_r_w(n, cr) - 2 - door_width) / 2))
	{
		ft_putchar('*');
		o++;
	}
	o = 0;
	while (o < door_width)
	{
		if (g_n > 4)
			with_doorknob(o, door_width, cr);
		else
			ft_putchar('|');
		o++;
	}
	o = 0;
	while (o < ((ft_r_w(n, cr) - 2 - door_width) / 2))
	{
		ft_putchar('*');
		o++;
	}
}

void	ft_print(int cr, int spaces, int o, int n)
{
	int init_spaces;

	init_spaces = ft_r_w(n, g_rows) - ft_r_w(n, g_rows) / 2;
	while (cr <= g_rows)
	{
		o = 0;
		spaces = init_spaces - ((ft_r_w(n, cr) - ft_r_w(n, 1)) / 2) - 1;
		while (o < spaces)
		{
			ft_putchar(' ');
			o++;
		}
		ft_putchar('/');
		o = 0;
		if (cr == g_rows || spaces < g_n_uneven)
			row_with_door(n, cr, 0);
		else
			while (o < ft_r_w(n, cr) - 2)
			{
				ft_putchar('*');
				o++;
			}
		ft_putchar('\\');
		ft_putchar('\n');
		cr++;
	}
}

void	sastantua(int n)
{
	g_n = n;
	if (g_n == 0)
		return ;
	if (g_n % 2 == 1)
		g_n_uneven = g_n + 1;
	else
		g_n_uneven = g_n;
	n = 0;
	g_rows = g_n * 3;
	while (n < g_n)
	{
		g_rows += n;
		n++;
	}
	ft_print(1, 0, 0, g_n);
}
