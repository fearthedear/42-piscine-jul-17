/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkinzel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/23 12:38:42 by lkinzel           #+#    #+#             */
/*   Updated: 2017/07/23 12:55:23 by lkinzel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int eval_expr(char *str)
{
	char *sy;
	int result;

	sy = shunting_yard(*str);
	result = read_rpn(sy);

	return (result);
}

int main(int ac, char **av)
{
	if (ac > 1) {
		ft_putnbr(eval_expr(av[1]));
		ft_putchar('\n');
	}
	return (0);
}