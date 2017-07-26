/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkinzel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/25 12:19:25 by lkinzel           #+#    #+#             */
/*   Updated: 2017/07/26 02:18:27 by jboniwel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
int		**make_it_numbers(char *array, int height);
void	show(int **tab, int height);
void	fill(int **tab, int height);
int		transform(char src);
int		array_is_valid(char *str);

#endif
