/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkinzel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 10:43:09 by lkinzel           #+#    #+#             */
/*   Updated: 2017/07/12 19:03:32 by lkinzel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	total;

	if (nb < 0 || nb > 12)
		return (0);
	if (nb < 2)
		return (1);
	total = nb--;
	while (nb > 1)
	{
		total *= nb;
		nb--;
	}
	return (total);
}
