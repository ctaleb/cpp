CPP = clang++
CFLAGS = -Wall -Wextra -Werror -std=c++98

ARGS = "bonjour à tous les étudiants !"

SRCS = megaphone.cpp

OBJS = $(SRCS:.cpp=.o)

NAME = megaphone

%.o: %.cpp
	$(CPP) $(CFLAGS) -o $@ -c $<

all: $(NAME)

$(NAME): $(OBJS)
	$(CPP) $(CFLAGS) -o $@ $(OBJS)

run: $(NAME)
	./$(NAME) $(ARGS)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all run clean fclean re