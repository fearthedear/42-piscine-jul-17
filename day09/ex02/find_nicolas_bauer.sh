# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    find_nicolas_bauer.sh                              :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lkinzel <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/13 19:17:23 by lkinzel           #+#    #+#              #
#    Updated: 2017/07/13 19:43:08 by lkinzel          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

cat "$1" | grep -i 'nicolas	bauer' | awk '{print $(NF-1)}'
