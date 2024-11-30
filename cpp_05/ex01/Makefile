CC = c++
FLAGS = -Wall -Werror -Wextra -std=c++98
NAME = test
SRC = Bureaucrat.cpp	Form.cpp	GradeTooHighException.cpp	GradeTooLowException.cpp	main.cpp	
OBJ = $(SRC:.cpp=.o)
INC = Bureaucrat.hpp	Form.hpp	GradeTooHighException.hpp	GradeTooLowException.hpp	

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