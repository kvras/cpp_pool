CC = c++
FLAGS = -Wall -Werror -Wextra -std=c++98
NAME = phonebook
SRC = Contact.cpp	phonebook.cpp	
OBJ = $(SRC:.cpp=.o)
INC = Contact.hpp	Phonebook.hpp	

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