CC = g++

STD = -std=c++98

FLAGS = -Wall -Wextra -Werror

RM = rm -f

all:
	$(CC) $(FLAGS) $(STD) main.cpp

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)
	$(RM) a.out

re: fclean all