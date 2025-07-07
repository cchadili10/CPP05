#include "Intern.hpp"


static AForm* create_shrubbery(const std::string& target) {return new ShrubberyCreationForm(target);};
static AForm* create_shrubbery(const std::string& target) {return new RobotomyRequestForm(target);};
static AForm* create_presidentail(const std::string& target) {return new PresidentialPardonForm(target);};

AForm *Intern::makeForm(std::string name_form , std::string target_form)
{
    std::string names[] 
    {
        "robotomy request",
        "presidentail pardon",
        "shrubbery creation"
    };
    AForm* (*creator[])(const std::string&) = 
    {
        create_shrubbery,
        create_shrubbery,
        create_presidentail
    };

    for (size_t i = 0; i < 3; i++)
    {
        if(name_form == names[i])
        {
            std::cout << "Intern creates" << name_form << std::endl;
            return creator[i](target_form);
        }
    }
    std::cout << "Intern can't find name" << std::endl; 
    return nullptr;
}