# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    skip.sh                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lkinzel <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/04 15:49:52 by lkinzel           #+#    #+#              #
#    Updated: 2017/07/04 22:17:24 by lkinzel          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

ls -l | awk 'NR % 2 == 1'
