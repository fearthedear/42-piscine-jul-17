/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_active_bits.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkinzel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 12:52:09 by lkinzel           #+#    #+#             */
/*   Updated: 2017/07/14 12:59:45 by lkinzel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_active_bits(int value)
{
	unsigned int count;

	count = 0;
	while (value)
	{
		count += value & 1;
		value >>= 1;
	}
	return (count);
}
