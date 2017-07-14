/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_perso.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkinzel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 04:24:56 by lkinzel           #+#    #+#             */
/*   Updated: 2017/07/14 04:54:10 by lkinzel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PERSO_H
# define FT_PERSO_H

# include <string.h>

char	*SAVE_AUSTIN_POWERS = "Save Austin Powers";

typedef struct	s_persos {
	char	*name;
	float	life;
	int		age;
	char	*profession;
}				t_perso;

#endif
