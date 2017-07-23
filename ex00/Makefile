

NAME = evalexpr
SRC = ./libft.a ./main.c ./shuntingyard.c ./stack.c
HEADER = ./includes/
FLAGS = -Werror -Wall -Wextra

all: $(NAME)

$(NAME):
	gcc $(FLAGS) -I=$(HEADER) -o $(NAME) $(SRC)

clean:
	@find . -name ".DS_Store" -delete

fclean: clean:
    /bin/rm -f $(NAME)

re: fclean all