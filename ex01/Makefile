CC = c++
FLAGS = -Wall -Werror -Wextra -std=c++98
NAME = phonebook
SRC = Contact.cpp phonebook.cpp 

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean:
	rm -rf $(NAME)

fclean: clean

re: fclean all

.PHONY: clean
