CC = g++

STD = -std=c++98

RM = rm -f


all: 
	$(CC) $(FLAGS) $(STD) main.cpp Karen.cpp

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)
	$(RM) a.out

re: fclean all
