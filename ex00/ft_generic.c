/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_generic.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkinzel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 16:54:28 by lkinzel           #+#    #+#             */
/*   Updated: 2017/07/13 17:15:14 by lkinzel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_generic(void)
{
	int			i;
	char		c;
	const char	*s = "Tut tut ; Tut tut";

	c = '\n';
	i = 0;
	while (s[i] != '\0')
	{
		write(1, &s[i], 1);
		i++;
	}
	write(1, &c, 1);
}

int		main(void)
{
	ft_generic();
	return (0);
}
