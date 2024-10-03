CC = c++
FLAGS = -Wall -Werror -Wextra -std=c++98
NAME = run
SRC = Detect.cpp	main.cpp	
OBJ = $(SRC:.cpp=.o)
INC = A.hpp	B.hpp	Base.hpp	C.hpp	Detect.hpp	

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