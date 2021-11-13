NAME = identify

CC = clang++

FLAGS = -Wall -Wextra -Werror

RM = rm -f

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) main.cpp -o $(NAME)

fclean:
	$(RM) -f $(NAME)

re: fclean all