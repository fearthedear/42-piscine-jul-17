/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_button.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkinzel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 22:38:35 by lkinzel           #+#    #+#             */
/*   Updated: 2017/07/13 22:52:03 by lkinzel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_button(int i, int j, int k)
{
	if (i > j && i < k)
		return (i);
	if (i > k && i < j)
		return (i);
	if (k > j && k < i)
		return (k);
	if (k > i && k < j)
		return (k);
	if (j > i && j < k)
		return (j);
	if (j > k && j < i)
		return (j);
	if (j == k)
		return (j);
	if (k == i)
		return (k);
	if (j == i)
		return (j);
	return (0);
}
