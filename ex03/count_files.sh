# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    count_files.sh                                     :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lkinzel <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/04 12:35:22 by lkinzel           #+#    #+#              #
#    Updated: 2017/07/05 17:25:09 by lkinzel          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

find . \( -type f -o -type d \) | wc -l | tr -d ' '
