/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_door.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkinzel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 05:05:16 by lkinzel           #+#    #+#             */
/*   Updated: 2017/07/14 06:13:31 by lkinzel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DOOR_H
# define FT_DOOR_H
# define OPEN 1
# define CLOSE 0
# define TRUE 1
# define EXIT_SUCCESS 0
# include <unistd.h>

typedef int	t_bool;

typedef struct	s_door {
	t_bool	state;
}				t_door;

void			ft_putstr(char *str);

t_bool			is_door_open(t_door *door);

t_bool			is_door_close(t_door *door);

void			close_door(t_door *door);

void			open_door(t_door *door);

#endif
