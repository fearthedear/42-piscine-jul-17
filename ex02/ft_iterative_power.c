/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkinzel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 11:56:02 by lkinzel           #+#    #+#             */
/*   Updated: 2017/07/12 19:23:11 by lkinzel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int init;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	init = nb;
	while (power > 1)
	{
		nb *= init;
		power--;
	}
	return (nb);
}
