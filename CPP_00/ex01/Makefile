CC = g++

FLAGS = -Wall -Wextra -Werror

RM = rm -f

all:
	@$(CC) $(FLAGS) main.cpp -o phonebook contact.cpp

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)
	$(RM) phone_book

re: fclean all