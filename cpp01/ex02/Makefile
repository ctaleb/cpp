CC = clang++
CFLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm
RFLAGS = -rf

SRCS =	main.cpp	\

OBJS =	$(SRCS:.cpp=.o)

NAME = brain

all: $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -o $@ -c $< -I.

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
	$(RM) $(RFLAGS) $(OBJS)

fclean: clean
	$(RM) $(RFLAGS) $(NAME)

re: fclean all

.PHONY: all clean fclean re