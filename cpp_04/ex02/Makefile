CC = c++
FLAGS = -Wall -Werror -Wextra -std=c++98
NAME = wrong
SRC = Animal.cpp	Brain.cpp	Cat.cpp	Dog.cpp	main.cpp	
OBJ = $(SRC:.cpp=.o)
INC = Animal.hpp	Brain.hpp	Cat.hpp	Dog.hpp	

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