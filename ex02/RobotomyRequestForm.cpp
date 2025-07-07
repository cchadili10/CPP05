#include "RobotomyRequestForm.hpp"
#include <cstdlib>


RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm(target, 72, 45){}
RobotomyRequestForm::~RobotomyRequestForm(){}
void RobotomyRequestForm::action() const 
{
    std::srand(time(0));
    std::cout << "Drilling noises" << std::endl;
    int random_val = std::rand() % 10;
    if(random_val % 2)
        std::cout << Get_name() << " has been robotomized successfully" << std::endl;
    else
        std::cout << Get_name() << "  robotomy failed" << std::endl;
    
}