CC = clang++
CFLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm
RFLAGS = -rf

INCS =	Zombie.hpp		\

SRCS =	main.cpp		\
		Zombie.cpp		\
		newZombie.cpp	\
		randomChump.cpp	\

OBJS = $(SRCS:.cpp=.o)

NAME = Zombie

%.o: %.cpp $(INCS)
	$(CC) $(CFLAGS) -o $@ -c $< -I.

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
	$(RM) $(RFLAGS) $(OBJS)

fclean: clean
	$(RM) $(RFLAGS) $(NAME)

re: fclean all