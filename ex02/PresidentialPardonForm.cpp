#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm(), target("none") {}
PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("Presidential", 25, 5, false), target(target) {}
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other) : AForm(other), target(other.target) {}

PresidentialPardonForm &PresidentialPardonForm::operator = (const PresidentialPardonForm &other)
{
    if (this != &other)
    {
        AForm::operator=(other);
        this->target = other.target;
    }
    return *this;
}
void PresidentialPardonForm::action() const 
{
    std::cout << target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}
PresidentialPardonForm::~PresidentialPardonForm(){}