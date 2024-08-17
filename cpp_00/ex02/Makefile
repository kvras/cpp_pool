CC = c++
FLAGS = -Wall -Werror -Wextra -std=c++98
NAME = test
SRC = Account.cpp tests.cpp	
OBJ = $(SRC:.cpp=.o)
INC = Account.hpp	

all: $(NAME)

$(NAME): $(INC) $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp $(INC)
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean:	clean
	rm -rf $(NAME)

re:	fclean all

.PHONY:	clean