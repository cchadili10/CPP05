#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP
#include "AForm.hpp"


class ShrubberyCreationForm : public AForm
{
    private :
        std::string target;
    public:
        std::string get_target() const;
        ShrubberyCreationForm();
        ShrubberyCreationForm(std::string target);
        ShrubberyCreationForm(const ShrubberyCreationForm &other);
        ShrubberyCreationForm &operator = (const ShrubberyCreationForm &other);

        virtual void action() const;
        virtual ~ShrubberyCreationForm();
};

#endif