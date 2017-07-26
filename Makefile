# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lkinzel <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/24 01:40:11 by lkinzel           #+#    #+#              #
#    Updated: 2017/07/25 12:24:05 by lkinzel          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq

FLAGS = -Werror -Wall -Wextra

SRC = transform_array.c main.c find_biggest.c transform_to_string.c read_str.c

HEADER = bsq.h

$(NAME):
	gcc $(FLAGS) -o $(NAME) $(SRC) libft.a

all: $(NAME)

clean:
	rm -f $(NAME)

re: clean all
