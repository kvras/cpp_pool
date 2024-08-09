CC = c++
FLAGS = -Wall -Werror -Wextra -std=c++98
NAME = Bsp
SRC = bsp.cpp	Fixed.cpp	main.cpp	Point.cpp	
OBJ = $(SRC:.c=.o)
INC = Fixed.hpp	Point.hpp	

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