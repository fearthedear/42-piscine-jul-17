/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_compact.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkinzel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 06:20:22 by lkinzel           #+#    #+#             */
/*   Updated: 2017/07/14 06:39:34 by lkinzel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	remove_element(char *array, int index, int array_length)
{
	int i;

	i = index;
	while (i < array_length - 1)
	{
		array[i] = array[i + 1];
		i++;
	}
}

int		ft_compact(char **tab, int length)
{
	int i;

	i = 0;
	while (tab[i])
	{
		if (!tab[i])
		{
			remove_element(**tab, i, length);
			length--;
		}
		i++;
	}
	return (length);
}
