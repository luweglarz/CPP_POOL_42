CC = g++

STD = -std=c++98

FLAGS = -Wall -Wextra -Werror

RM = rm -f

all:
	@$(CC) $(FLAGS) $(STD) main.cpp -o phonebook contact.cpp

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)
	$(RM) phone_book

re: fclean all