NAME = zombie.a

CC = g++

STD = -std=c++98

RM = rm -f

SRCS = ZombieHorde.cpp Zombie.cpp \

OBJS = $(SRCS:.cpp=.o)

.cpp.o:
	$(CC) $(FLAGS) -c $< -o $@


all: $(OBJS)
	@ar rcs $(NAME) $(OBJS)
	@ranlib $(NAME)
	$(CC) $(FLAGS) $(STD) main.cpp $(NAME)

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)
	$(RM) a.out

re: fclean all