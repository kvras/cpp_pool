CC = c++
FLAGS = -Wall -Werror -Wextra -std=c++98
NAME = run
SRC = AMateria.cpp	Character.cpp	Cure.cpp	Ice.cpp	main.cpp	MateriaSource.cpp	
OBJ = $(SRC:.cpp=.o)
INC = AMateria.hpp	Character.hpp	Cure.hpp	Ice.hpp	ICharacter.hpp	IMateriaSource.hpp	MateriaSource.hpp	

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