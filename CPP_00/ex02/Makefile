CC = g++

STD = -std=c++98

FLAGS = -Wall -Wextra -Werror

RM = rm -f

all:
	$(CC) $(FLAGS) $(STD) tests.cpp -o Account Account.cpp

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)
	$(RM) Account

re: fclean all