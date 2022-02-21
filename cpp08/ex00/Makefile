CC		=	c++
CFLAGS	=	-Wall -Wextra -Werror -std=c++98

RM		=	rm
RFLAGS	=	-rf

INCS	=	easyfind.hpp	\

SRCS	=	main.cpp	\

OBJS	=	$(SRCS:.cpp=.o)

NAME	=	easyfind

all: $(NAME)

%.o: %.cpp $(INCS)
	$(CC) $(CFLAGS) -c $< -o $@ -I.

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(RFLAGS) $(OBJS)

fclean: clean
	$(RM) $(RFLAGS) $(NAME)

re: fclean all

.PHONY: all clean fclean re
