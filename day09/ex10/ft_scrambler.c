/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_scrambler.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkinzel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 03:41:33 by lkinzel           #+#    #+#             */
/*   Updated: 2017/07/14 04:20:51 by lkinzel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_scrambler(int ***a, int *b, int *******c, int ****d)
{
	int temp;
	int temp2;

	temp2 = *******c;
	*******c = ***a;
	temp = ***a;
	***a = *b;
	temp = *b;
	*b = ****d;
	****d = temp2;
}
