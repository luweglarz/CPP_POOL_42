NAME = account.a

CC = clang++

STD = -std=c++98

FLAGS = -Wall -Wextra -Werror

RM = rm -f

SRCS = Account.cpp \

OBJS = $(SRCS:.cpp=.o)

.cpp.o:
	$(CC) $(FLAGS) -c $< -o $@

all: $(NAME)

$(NAME) : $(OBJS)
	@ar rcs $(NAME) $(OBJS)
	@ranlib $(NAME)
	$(CC) $(FLAGS) $(STD) tests.cpp $(NAME) -o account

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) -f $(NAME)
	$(RM) -f account

re: fclean all