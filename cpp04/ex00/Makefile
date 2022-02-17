CC		=	c++
CFLAGS	=	-Wall -Wextra -Werror -std=c++98

RM		=	rm
RFLAGS	=	-rf

INCS	=	Animal.hpp		\
			Cat.hpp			\
			Dog.hpp			\
			WrongAnimal.hpp	\
			WrongCat.hpp	\

SRCS	=	main.cpp		\
			Animal.cpp		\
			Cat.cpp			\
			Dog.cpp			\
			WrongAnimal.cpp	\
			WrongCat.cpp	\

OBJS	=	$(SRCS:.cpp=.o)

NAME	=	barn

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
