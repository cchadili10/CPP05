#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP
// #include "AForm.hpp"
#include "AForm.hpp"


class ShrubberyCreationForm : public AForm
{
    private :
        std::string target;
    public:
        std::string get_target() const;
        ShrubberyCreationForm(std::string target);
        virtual void action() const;
        virtual ~ShrubberyCreationForm();
};

#endif