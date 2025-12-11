#include "PresidentialPardonForm.hpp"


PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("Presidential", 25, 5, false), target(target){}
void PresidentialPardonForm::action() const 
{
    std::cout << target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}
PresidentialPardonForm::~PresidentialPardonForm(){}