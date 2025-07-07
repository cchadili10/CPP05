#include "Bureaucrat.hpp"
#include <cstdlib>

int main() {
    // try {
    //     Bureaucrat b1("Hamza", 200); 
    //     std::cout << b1<< std::endl;
    // } catch (std::exception& e) {

    //     std::cout << e.what() << std::endl;
    // }
    // try {
    //     Bureaucrat b2("Ali", 151); 
    // } catch (std::exception& e) {
    //     std::cout << e.what() << std::endl;
    // }

    // try {
    //     Bureaucrat b3("Sara", 1);
    //     std::cout << b3 << std::endl;
    //     b3.incrementGrade();
    // } catch (std::exception& e) {
    //     std::cout << e.what() << std::endl;
    // }

    srand(time(0));
    std::cout << std::rand() % 11;
    return 0;
}