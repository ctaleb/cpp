CC		=	c++
CFLAGS	=	-Wall -Wextra -Werror -std=c++98 -g3

RM		=	rm
RFLAGS	=	-rf

INCS	=	Span.hpp	\

SRCS	=	main.cpp	\
			Span.cpp	\

OBJS	=	$(SRCS:.cpp=.o)

NAME	=	span

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
