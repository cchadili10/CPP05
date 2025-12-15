#include "Bureaucrat.hpp"
#include <cstdlib>

int main() {
    try {
        Bureaucrat b1("Hamza", 200); 
        std::cout << b1<< std::endl;
    } catch (std::exception& e) {

        std::cout << e.what() << std::endl;
    }
    try {
        Bureaucrat b2("Ali", 15); 
        b2.incrementGrade();
        std::cout << b2 << std::endl;
    } catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }

    try {
        Bureaucrat b3("Sara", 1);
        std::cout << b3 << std::endl;
        b3.incrementGrade();
    } catch (Bureaucrat::GradeTooHighException &e) {
        std::cout << e.what() << std::endl;
    }

    return 0;
}