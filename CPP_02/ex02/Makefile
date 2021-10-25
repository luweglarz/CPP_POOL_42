NAME = Fixed.a

CC = clang++

STD = -std=c++98

FLAGS = -Wall -Wextra -Werror

RM = rm -f

SRCS = Fixed.cpp\

OBJS = $(SRCS:.cpp=.o)

.cpp.o:
	$(CC) $(FLAGS) -c $< -o $@

all: $(NAME)

$(NAME) : $(OBJS)
	@ar rcs $(NAME) $(OBJS)
	@ranlib $(NAME)
	$(CC) $(FLAGS) $(STD) main.cpp $(NAME) -o Fixed

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) -f $(NAME)
	$(RM) -f Fixed

re: fclean all