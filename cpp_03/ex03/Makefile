CC = c++
FLAGS = -Wall -Werror -Wextra -std=c++98
NAME = DiamondTrap
SRC = ClapTrap.cpp	FragTrap.cpp	main.cpp	ScavTrap.cpp	
OBJ = $(SRC:.cpp=.o)
INC = ClapTrap.hpp	FragTrap.hpp	ScavTrap.hpp	

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