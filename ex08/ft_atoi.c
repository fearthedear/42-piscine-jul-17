/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkinzel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 02:17:51 by lkinzel           #+#    #+#             */
/*   Updated: 2017/07/11 11:43:46 by lkinzel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int g_is_negative = 0;
int g_length = 0;
int g_invalid = 0;

int		ft_strlen(const char *str)
{
	int n;

	n = 0;
	while (1)
	{
		if (str[n] == '\0')
			return (n);
		n++;
	}
}

void	str_to_array(char *str, int arr[])
{
	int i;
	int l;

	l = g_length;
	i = 0;
	if (g_is_negative)
	{
		i = 1;
		l += 1;
	}
	while (i < l)
	{
		if (str[i] < 48 || str[i] > 57)
			g_invalid = 1;
		if (g_is_negative)
			arr[i - 1] = str[i] - 48;
		else
			arr[i] = str[i] - 48;
		i++;
	}
}

int		calc_multi(void)
{
	int m;
	int l;

	l = g_length;
	if (l == 1)
		return (1);
	l -= 2;
	m = 10;
	while (l > 0)
	{
		m = m * 10;
		l--;
	}
	return (m);
}

int		calc_total(int arr[], int x)
{
	int		m;
	long	total;

	total = 0;
	m = calc_multi();
	while (x < g_length)
	{
		total = total + ((arr[x]) * m);
		m /= 10;
		x++;
	}
	if (g_is_negative)
	{
		if (total <= 2147483648)
			return ((int)-total);
	}
	else
	{
		if (total <= 2147483647)
			return ((int)total);
	}
	return (0);
}

int		ft_atoi(char *str)
{
	int arr[10];

	g_length = ft_strlen(str);
	if (str[0] == 45)
	{
		g_is_negative = 1;
		g_length -= 1;
	}
	if (g_length > 10)
		return (0);
	str_to_array(str, arr);
	if (g_invalid)
		return (0);
	else
		return (calc_total(arr, 0));
}
