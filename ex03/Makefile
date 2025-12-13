NAME = Bureaucrat
CPP = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
SRC = main.cpp Bureaucrat.cpp AForm.cpp ShrubberyCreationForm.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp Intern.cpp
OBJECTS = $(SRC:.cpp=.o)

all: $(OBJECTS)
	$(CPP) $(FLAGS) $(OBJECTS) -o $(NAME)

%.o: %.cpp Bureaucrat.hpp AForm.hpp ShrubberyCreationForm.hpp PresidentialPardonForm.hpp RobotomyRequestForm.hpp Intern.hpp
	$(CPP) $(FLAGS) -c $< -o $@

clean: 
	rm -rf $(OBJECTS)

fclean: clean
	rm -rf $(NAME)
	
re: fclean all