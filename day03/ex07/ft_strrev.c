/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkinzel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 16:30:58 by lkinzel           #+#    #+#             */
/*   Updated: 2017/07/08 22:31:04 by lkinzel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

int		ft_strlen(char *str)
{
	int n;

	n = 0;
	while (1)
	{
		if (str[n] == '\0')
		{
			return (n);
		}
		n++;
	}
}

char	*ft_strrev(char *str)
{
	int		l;
	int		m;
	char	copy;

	l = ft_strlen(str) - 1;
	m = 0;
	while (l > m)
	{
		copy = str[m];
		str[m] = str[l];
		str[l] = copy;
		m++;
		l--;
	}
	return (str);
}
