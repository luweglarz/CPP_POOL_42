CC = g++

STD = -std=c++98

RM = rm -f

all: 
	$(CC) $(FLAGS) $(STD) main.cpp -o karenFilter Karen.cpp

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)
	$(RM) karenFilter

re: fclean all
