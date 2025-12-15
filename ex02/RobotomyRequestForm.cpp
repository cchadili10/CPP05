#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm() : AForm(), target("none") {}
RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("Robotomy", 72, 45), target(target) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) : AForm(other), target(other.target) {}
RobotomyRequestForm &RobotomyRequestForm::operator= (const RobotomyRequestForm &other)
{
    if(this != &other)
    {
        AForm::operator=(other);
        this->target = other.target;
    }
    return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
    if (!this->Get_signed())
        throw AForm::GradeIsSignedException();
    else if (executor.getGrade() > this->Get_execGrade())
        throw AForm::GradeTooLowException();

    static int random_val = 0;
    std::cout << "Drilling noises" << std::endl;
    if (random_val % 2 == 0)
        std::cout << target << " has been robotomized successfully" << std::endl;
    else
        std::cout << target << "  robotomy failed" << std::endl;
    random_val++;
}
RobotomyRequestForm::~RobotomyRequestForm(){}