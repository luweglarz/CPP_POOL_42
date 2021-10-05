CC = g++

FLAGS = -Wall -Wextra -Werror

RM = rm -f

all:
	$(CC) $(FLAGS) Account.cpp -o Account

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)
	$(RM) phone_book

re: fclean all