CC = c++
FLAGS = -Wall -Werror -Wextra -std=c++98
NAME = megaphone
SRC = megaphone.cpp 

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean:
	rm -rf $(NAME)

fclean: clean

re: fclean all

.PHONY: clean
