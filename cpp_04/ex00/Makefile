CC = c++
FLAGS = -Wall -Werror -Wextra -std=c++98
NAME = run
SRC = Animal.cpp	Cat.cpp	Dog.cpp	main.cpp	WrongAnimal.cpp	WrongCat.cpp	
OBJ = $(SRC:.cpp=.o)
INC = Animal.hpp	Cat.hpp	Dog.hpp	WrongAnimal.hpp	WrongCat.hpp	

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