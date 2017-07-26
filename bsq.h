/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkinzel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/25 12:19:25 by lkinzel           #+#    #+#             */
/*   Updated: 2017/07/26 11:48:13 by jboniwel         ###   ########.fr       */
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
void    make_it_numbers(int ***tab, char *array, int height, int fillit);
void	show(int **tab, int height, int length);
void	fill(int **tab, int height, int length);
int		transform(char src);
char	*ft_strcat(char *s1, char *s2);
char	*get_information(char *str);
int		ft_atoi(char *str);
void	find_biggest(int **arr, char *str);
char    *ft_strcharcat(char *s1, char s2);
char    *transform_to_string(int **tab, int pos[2], int size);
int     ft_strlen(char *str);
int     ft_strcmp(char *s1, char *s2);

int     **g_arr;
int		g_height;
int		g_length;
int		**g_orig_array;
char	g_empty;
char	g_obstacle;
char	g_square;
int     g_dim;
int     g_pos[2];
int     g_strlength;

#endif
