/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkinzel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/25 12:19:25 by lkinzel           #+#    #+#             */
/*   Updated: 2017/07/26 11:36:32 by jboniwel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>

# define BUF_SIZE 10

void	ft_putchar(char c);
void	ft_putstr(char *str);
int		**make_it_numbers(char *array, int height);
void	show(int **tab, int height, int length);
void	fill(int **tab, int height, int length);
int		transform(char src);
int		find_length(char *str, int height);
char	*ft_strcat(char *s1, char *s2);
void	get_information(char *str);

int		g_height;
int		g_length;
int		**g_orig_array;
char	g_empty;
char	g_obstacle;
char	g_square;

char    *ft_strcharcat(char *s1, char s2);
char    *transform_to_string(int arr[g_height][g_width], int pos[2], int size);

#endif
