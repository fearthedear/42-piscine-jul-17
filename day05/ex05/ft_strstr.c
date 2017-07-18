/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkinzel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 10:42:08 by lkinzel           #+#    #+#             */
/*   Updated: 2017/07/12 16:41:37 by lkinzel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		checkcomplete(char *str, char *to_find, int i)
{
	unsigned long	x;
	int				hit;

	hit = 1;
	x = 0;
	while (to_find[x] != '\0')
	{
		if (str[i] != to_find[x])
			hit = 0;
		i++;
		x++;
	}
	if (hit)
	{
		return (1);
	}
	else
		return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	char				*ptr;
	unsigned long		i;

	if (to_find[0] == '\0')
		return (str);
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == to_find[0])
		{
			if (checkcomplete(str, to_find, i))
				return (&str[i]);
		}
		i++;
	}
	ptr = 0;
	return (ptr);
}
