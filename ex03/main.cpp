#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

// "shrubbery creation",
//  "robotomy request",
//  "presidentail pardon"

int main()
{

    Bureaucrat ali("ali",1);
    Intern someRandomIntern;
    AForm *rrf;
    rrf = someRandomIntern.makeForm("presidentail pardon", "Bender");
    rrf->beSigned(ali);
    rrf->execute(ali);
}