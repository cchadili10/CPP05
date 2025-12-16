#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
    private:
        AForm *create_shrubbery(std::string target);
        AForm *create_robotomy(std::string target);
        AForm *create_presidential(std::string target);

    public:
        Intern();
        Intern(const Intern &other);
        Intern &operator = (const Intern &other);
        ~Intern();
        AForm* makeForm(std::string name_form ,std::string target_form);
};





#endif