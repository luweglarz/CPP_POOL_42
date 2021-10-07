CC = g++

STD = -std=c++98

FLAGS = -Wall -Wextra -Werror

RM = rm -f

all:
	@$(CC) $(FLAGS) $(STD) -fsanitize=address main.cpp -o phonebook contact.cpp display.cpp utils.cpp

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)
	$(RM) phonebook

re: fclean all