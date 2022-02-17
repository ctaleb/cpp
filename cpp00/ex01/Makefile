CPP = clang++
CFLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm
RFLAGS = -rf

INC_DIR = inc
INC =	Entry.class.hpp		\
		Phonebook.class.hpp
INCS = $(addprefix $(INC_DIR)/, $(INC))

SRC_DIR = src
SRC =	phonebook.cpp		\
		Phonebook.class.cpp	\
		Entry.class.cpp
SRCS = $(addprefix $(SRC_DIR)/, $(SRC))

OBJ_DIR = obj
OBJ = $(SRC:.cpp=.o)
OBJS = $(addprefix $(OBJ_DIR)/, $(OBJ))

NAME = phonebook

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp $(INCS)
	@mkdir -p $(OBJ_DIR)
	$(CPP) $(CFLAGS) -o $@ -c $< -I $(INC_DIR)/

all: $(NAME)

$(NAME): $(OBJS)
	$(CPP) $(CFLAGS) -o $@ $(OBJS)

run: $(NAME)
	./$(NAME)

clean:
	$(RM) $(RFLAGS) $(OBJS)
	$(RM) $(RFLAGS) $(OBJ_DIR)

fclean: clean
	$(RM) $(RFLAGS) $(NAME)

re: fclean all

.PHONY: all run clean fclean re