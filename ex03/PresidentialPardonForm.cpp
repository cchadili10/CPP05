#include "PresidentialPardonForm.hpp"


PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm(target, 25, 5){}
PresidentialPardonForm::~PresidentialPardonForm(){}
void PresidentialPardonForm::action() const 
{
    std::cout << Get_name() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}