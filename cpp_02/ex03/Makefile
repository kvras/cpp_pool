CC = c++
FLAGS = -Wall -Werror -Wextra -std=c++98
NAME = Bsp
SRC = bsp.cpp	Fixed.cpp	main.cpp	Point.cpp	
OBJ = $(SRC:.cpp=.o)
INC = Fixed.hpp	Point.hpp	

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