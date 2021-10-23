NAME = megaphone

CC = clang++

STD = -std=c++98

FLAGS = -Wall -Wextra -Werror

RM = rm -f

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) $(STD) megaphone.cpp -o $(NAME)

fclean:
	$(RM) -f $(NAME)

re: fclean all