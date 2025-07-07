#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {
//     try {
//         Bureaucrat b1("Hamza", 200); 
//         std::cout << b1<< std::endl;
//     } catch (std::exception& e) {

//         std::cout << e.what() << std::endl;
//     }
//     try {
//         Bureaucrat b2("Ali", 151); 
//     } catch (std::exception& e) {
//         std::cout << e.what() << std::endl;
//     }

//     try {
//         Bureaucrat b3("Sara", 1);
//         std::cout << b3 << std::endl;
//         b3.incrementGrade();
//     } catch (std::exception& e) {
//         std::cout << e.what() << std::endl;
//     }

//     return 0;

    Bureaucrat alice("Alice", 1);    // High rank (can do anything)
    Bureaucrat bob("Bob", 150);      // Low rank (can do almost nothing)
    Bureaucrat eve("Eve", 40);       // Medium rank

    // Create Forms
    ShrubberyCreationForm shrubbery("garden");
    RobotomyRequestForm robotomy("Bender");
    PresidentialPardonForm pardon("Marvin");

    // Try to sign and execute forms with various bureaucrats

    std::cout << "\n--- Executing Forms ---\n";
    bob.executeForm(shrubbery);   // Should fail (low grade)
    eve.executeForm(robotomy);    // Should succeed if signed
    alice.executeForm(pardon);    // Should succeed

    std::cout << "\n--- Executing All Forms with Alice ---\n";
    alice.executeForm(shrubbery);
    alice.executeForm(robotomy);
    alice.executeForm(pardon);
    std::cout << "dsd"<<std::endl;
}