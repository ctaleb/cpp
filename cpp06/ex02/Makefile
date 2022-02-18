CC		=	c++
CFLAGS	=	-Wall -Wextra -Werror -std=c++98

RM		=	rm
RFLAGS	=	-rf

INCS	=	Base.hpp	\
			A.hpp		\
			B.hpp		\
			C.hpp		\

SRCS	=	main.cpp	\
			Base.cpp	\

OBJS	=	$(SRCS:.cpp=.o)

NAME	=	base

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
