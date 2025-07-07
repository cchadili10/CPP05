#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
private:
    /* data */
public:
    Intern();
    ~Intern();
    AForm* makeForm(std::string name_form ,std::string target_form);
};





#endif