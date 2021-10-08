CC = g++

STD = -std=c++98

FLAGS = -Wall -Wextra -Werror

RM = rm -f

all: 
	$(CC) $(FLAGS) $(STD) main.cpp $(NAME)

clean:
	$(RM) $(OBJS)
	$(RM) *.replace

fclean:	clean
	$(RM) $(NAME)
	$(RM) a.out