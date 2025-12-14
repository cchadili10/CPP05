#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm(), target("none") {}
PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("Presidential", 25, 5), target(target) {}
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other) : AForm(other), target(other.target) {}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &other)
{
    if (this != &other)
    {
        AForm::operator=(other);
        this->target = other.target;
    }
    return *this;
}
void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{

    if (!this->Get_signed())
        throw AForm::GradeIsSignedException();
    else if (executor.getGrade() > this->Get_execGrade())
        throw AForm::GradeTooLowException();
    std::cout << target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}
PresidentialPardonForm::~PresidentialPardonForm() {}