CC		=	c++
CFLAGS	=	-Wall -Wextra -Werror -std=c++98

RM		=	rm
RFLAGS	=	-rf

INCS	=	Bureaucrat.hpp				\
			AForm.hpp					\
			PresidentialPardonForm.hpp	\
			RobotomyRequestForm.hpp		\
			ShrubberyCreationForm.hpp	\

SRCS	=	main.cpp					\
			Bureaucrat.cpp				\
			AForm.cpp					\
			PresidentialPardonForm.cpp	\
			RobotomyRequestForm.cpp		\
			ShrubberyCreationForm.cpp	\

OBJS	=	$(SRCS:.cpp=.o)

NAME	=	archive

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
