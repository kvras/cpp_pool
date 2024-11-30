CC = c++
FLAGS = -Wall -Werror -Wextra -std=c++98
NAME = test
SRC = AForm.cpp	Bureaucrat.cpp	GradeTooHighException.cpp	GradeTooLowException.cpp	Intern.cpp	main.cpp	PresidentialPardonForm.cpp	RobotomyRequestForm.cpp	ShrubberyCreationForm.cpp	
OBJ = $(SRC:.cpp=.o)
INC = AForm.hpp	Bureaucrat.hpp	GradeTooHighException.hpp	GradeTooLowException.hpp	Intern.hpp	PresidentialPardonForm.hpp	RobotomyRequestForm.hpp	ShrubberyCreationForm.hpp	

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