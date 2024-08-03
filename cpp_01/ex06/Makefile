CC = c++
FLAGS = -Wall -Werror -Wextra -fsanitize=address -std=c++98
NAME = harlFilter
SRC = Harl.cpp	main.cpp	
OBJ = $(SRC:.c=.o)
INC = Harl.hpp	

all: $(NAME)

$(NAME): $(INC) $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

%.o: %.c $(INC)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(NAME)

fclean:	clean

re:	fclean all

.PHONY:	clean