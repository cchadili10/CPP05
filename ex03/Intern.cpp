#include "Intern.hpp"

Intern::Intern() {}
Intern::Intern(const Intern &other) { *this = other; }
Intern &Intern::operator = (const Intern &other)
{
    (void)other;
    return *this;
}

AForm *Intern::create_shrubbery(std::string target) { return new ShrubberyCreationForm(target); };
AForm* Intern::create_robotomy(std::string target) {return new RobotomyRequestForm(target);};
AForm *Intern::create_presidential(std::string target) { return new PresidentialPardonForm(target);};

AForm *Intern::makeForm(std::string name_form , std::string target_form)
{
    std::string names[] =
    {
        "shrubbery creation",
        "robotomy request",
        "presidentail pardon"
    };
    AForm *(Intern::*creator[3])(std::string) =
        {
            &Intern::create_shrubbery,
            &Intern::create_robotomy,
            &Intern::create_presidential
        };

    for (size_t i = 0; i < 3; i++)
    {
        if(name_form == names[i])
        {
            std::cout << "Intern creates" << name_form << std::endl;
            return (this->*creator[i])(target_form);
        }
    }
    std::cout << "Intern can't find name" << std::endl; 
    return NULL;
}
Intern::~Intern() {}