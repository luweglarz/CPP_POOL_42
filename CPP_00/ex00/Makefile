CC = g++

FLAGS = -Wall -Wextra -Werror

RM = rm -f

all:
	@$(CC) $(FLAGS) megaphone.cpp -o megaphone

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)
	$(RM) megaphone

re: fclean all