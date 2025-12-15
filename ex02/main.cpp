#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {

    try
    {
        Bureaucrat alice("Alice", 1);
        Bureaucrat sara("sara", 100);
        RobotomyRequestForm robotomy("robo");
        ShrubberyCreationForm sh1("garden");
        PresidentialPardonForm presidentail("llo");


        robotomy.beSigned(alice);

        alice.signForm(robotomy);
        sara.executeForm(robotomy);
        sara.executeForm(robotomy);
        alice.executeForm(robotomy);
        alice.executeForm(robotomy);

        sara.signForm(sh1);
        std::cout << sh1 << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}