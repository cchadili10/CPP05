#include "RobotomyRequestForm.hpp"
#include <cstdlib>


RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("Robotomy", 72, 45, false), target(target){}
void RobotomyRequestForm::action() const
{
    static int random_val = 0;
    std::cout << "Drilling noises" << std::endl;
    if (random_val % 2)
        std::cout << target << " has been robotomized successfully" << std::endl;
    else
        std::cout << target << "  robotomy failed" << std::endl;
    random_val++;
}
RobotomyRequestForm::~RobotomyRequestForm(){}