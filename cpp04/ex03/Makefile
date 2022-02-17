CC		=	c++
CFLAGS	=	-Wall -Wextra -Werror -std=c++98

RM		=	rm
RFLAGS	=	-rf

INCS	=	AMateria.hpp		\
			Character.hpp		\
			Cure.hpp			\
			Ice.hpp				\
			MateriaSource.hpp	\
			ICharacter.hpp		\
			IMateriaSource.hpp	\

SRCS	=	main.cpp			\
			AMateria.cpp		\
			Character.cpp		\
			Cure.cpp			\
			Ice.cpp				\
			MateriaSource.cpp	\

OBJS	=	$(SRCS:.cpp=.o)

NAME	=	finalfantasy

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
