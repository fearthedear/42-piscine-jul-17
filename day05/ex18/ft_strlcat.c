/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkinzel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 14:58:37 by lkinzel           #+#    #+#             */
/*   Updated: 2017/07/18 21:50:34 by lkinzel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_strlen(char *str)
{
	int n;

	n = 0;
	while (str[n] != '\0')
		n++;
	return (n);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	x;
	unsigned int	origl;

	i = 0;
	x = 0;
	origl = ft_strlen(dest);
	while (dest[i] != '\0')
		i++;
	while (src[x] != '\0' && i < size - 1)
	{
		dest[i] = src[x];
		i++;
		x++;
	}
	dest[i] = '\0';
	if (ft_strlen(src) + origl < size)
		return (ft_strlen(src) + origl);
	else if (ft_strlen(src) + origl > size)
		return (size + ft_strlen(src));
	else
		return (size);
}
