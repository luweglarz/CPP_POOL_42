NAME = materia.a

CC = c++

STD = -std=c++98

FLAGS = -Wall -Wextra -Werror

RM = rm -f

SRCS =   AMateria.cpp Cure.cpp Ice.cpp Character.cpp MateriaSource.cpp\

OBJS = $(SRCS:.cpp=.o)

.cpp.o:
	$(CC) $(FLAGS) -c $< -o $@

all: $(NAME)

$(NAME) : $(OBJS)
	@ar rcs $(NAME) $(OBJS)
	@ranlib $(NAME)
	$(CC) $(FLAGS) $(STD) -fsanitize=address main.cpp $(NAME) -o materia

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) -f $(NAME)
	$(RM) -f materia

re: fclean all