CC = clang++
CFLAGS = -Wall -Wextra -Werror

RM = rm
RFLAGS = -rf

INCS =	Account.hpp

SRCS =	Account.cpp	\
		tests.cpp	\

OBJS =	$(SRCS:.cpp=.o)

NAME = account

all: $(NAME)

%.o: %.cpp $(INCS)
	$(CC) $(CFLAGS) -o $@ -c $< -I.

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
	$(RM) $(RFLAGS) $(OBJS)

fclean: clean
	$(RM) $(RFLAGS) $(NAME)

re: fclean all

.PHONY: all clean fclean re