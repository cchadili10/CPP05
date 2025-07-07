#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP
// #include "AForm.hpp"
#include "AForm.hpp"


class ShrubberyCreationForm : public AForm
{
    public:
        ShrubberyCreationForm(std::string target);
        virtual ~ShrubberyCreationForm();
        virtual void action() const;
};

#endif