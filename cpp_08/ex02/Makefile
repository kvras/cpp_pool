CC = c++
FLAGS = -Wall -Werror -Wextra -std=c++98
NAME = test
SRC = main.cpp	
OBJ = $(SRC:.c=.o)
INC = MutantStack.hpp	

all: $(NAME)

$(NAME): $(INC) $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

%.o: %.c $(INC)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(NAME)

fclean:	clean

re:	fclean all

.PHONY:	clean