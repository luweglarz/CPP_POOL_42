NAME = ClapTrap.a

CC = clang++

STD = -std=c++98

FLAGS = -Wall -Wextra -Werror

RM = rm -f

SRCS = ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp \

OBJS = $(SRCS:.cpp=.o)

.cpp.o:
	$(CC) $(FLAGS) -c $< -o $@

all: $(NAME)

$(NAME) : $(OBJS)
	@ar rcs $(NAME) $(OBJS)
	@ranlib $(NAME)
	$(CC) $(FLAGS) $(STD) main.cpp $(NAME) -o DiamondTrap

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) -f $(NAME)
	$(RM) -f DiamondTrap

re: fclean all