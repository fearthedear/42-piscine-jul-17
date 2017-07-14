/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkinzel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 01:06:05 by lkinzel           #+#    #+#             */
/*   Updated: 2017/07/14 02:37:53 by lkinzel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putalert(void)
{
	int			i;
	char		c;
	const char	*str = "Alert!!!";

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	c = '\n';
	write(1, &c, 1);
}

char	*ft_strlowcase(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 64 && str[i] < 91)
		{
			c = str[i] + 32;
			str[i] = c;
		}
		i++;
	}
	return (str);
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;
	int x;

	i = 0;
	x = 0;
	while (s2[x] == 32)
		x++;
	while (s1[i] == s2[x])
	{
		if (s1[i] == '\0' && s2[x] == '\0')
			return (1);
		i++;
		x++;
		if (s1[i] == '\0' && s2[x] == 32)
			return (1);
	}
	return (0);
}

int		checkword(char *str)
{
	if (ft_strcmp("president", ft_strlowcase(str)) || ft_strcmp("attack",
				ft_strlowcase(str)) || ft_strcmp("powers", ft_strlowcase(str)))
	{
		putalert();
		return (1);
	}
	return (0);
}

int		main(int argc, char *argv[])
{
	int	i;
	int done;

	if (argc == 1)
		return (0);
	done = 0;
	i = 1;
	while (i < argc && !done)
	{
		if (checkword(argv[i]))
			done = 1;
		i++;
	}
	return (0);
}
