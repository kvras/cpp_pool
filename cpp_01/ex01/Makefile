CC = c++
FLAGS = -Wall -Werror -Wextra -std=c++98
NAME = zombie
SRC = main.cpp	Zombie.cpp	zombieHorde.cpp	
OBJ = $(SRC:.cpp=.o)
INC = Zombie.hpp	

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