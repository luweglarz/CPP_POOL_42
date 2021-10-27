NAME = replace

CC = clang++

STD = -std=c++98

FLAGS = -Wall -Wextra -Werror

RM = rm -f

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) $(STD) main.cpp -o $(NAME)

fclean:
	$(RM) -f $(NAME)
	$(RM) -f *.replace

re: fclean all