NAME = mutantstack

CC = c++

FLAGS = -Wall -Wextra -Werror

RM = rm -f

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) main.cpp mutantstack.cpp -o $(NAME)

fclean:
	$(RM) -f $(NAME)

re: fclean all