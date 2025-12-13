#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
    private:
        std::string target;
    public:
        PresidentialPardonForm();
        PresidentialPardonForm(const PresidentialPardonForm &other);
        PresidentialPardonForm &operator = (const PresidentialPardonForm &other);
        PresidentialPardonForm(std::string target);

        virtual void execute(Bureaucrat const &executor) const;
        virtual ~PresidentialPardonForm();
};


#endif