# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    people.sh                                          :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lkinzel <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/03 17:41:59 by lkinzel           #+#    #+#              #
#    Updated: 2017/07/03 19:00:43 by lkinzel          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

ldapsearch -Q "(uid=z*)" | grep '^cn' | cut -c 5- | sort -r -f
