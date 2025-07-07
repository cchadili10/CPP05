NAME = Bureaucrat
CPP = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
SRC = main.cpp Bureaucrat.cpp Form.cpp
OBJECTS = $(SRC:.cpp=.o)

all: $(OBJECTS)
	$(CPP) $(FLAGS) $(OBJECTS) -o $(NAME)

%.o: %.cpp Bureaucrat.hpp Form.hpp
	$(CPP) $(FLAGS) -c $< -o $@

clean: 
	rm -rf $(OBJECTS)

fclean: clean
	rm -rf $(NAME)
	
re: fclean all