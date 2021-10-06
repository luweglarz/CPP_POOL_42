CC = g++

STD = -std=c++98

FLAGS = -Wall -Wextra -Werror

RM = rm -f

all:
	@$(CC) $(FLAGS) $(STD) megaphone.cpp -o megaphone

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)
	$(RM) megaphone

re: fclean all