#include "Bureaucrat.hpp"


Bureaucrat::Bureaucrat(){}
Bureaucrat::~Bureaucrat(){}
Bureaucrat::Bureaucrat(const Bureaucrat &bure){*this = bure;}
Bureaucrat::Bureaucrat(std::string name, int grade)
{
    if(grade < 1)
        throw Bureaucrat::GradeTooHighException();
    if(grade > 150)
        throw Bureaucrat::GradeTooLowException();
    this->name = name;
    this->grade = grade;
}
Bureaucrat &Bureaucrat::operator=(const Bureaucrat &bure)
{
    if(this == &bure)
        return *this;
    this->grade = bure.grade;
    this->name = bure.name;
    return *this;
}

std::string Bureaucrat::getName(){return name;}
int Bureaucrat::getGrade() const {return grade;}

void Bureaucrat::incrementGrade()
{
    if(grade <= 1)
        throw Bureaucrat::GradeTooHighException();
    grade--;
}
void Bureaucrat::decrementGrade()
{
    if(grade >= 150)
        throw Bureaucrat::GradeTooLowException();
    grade++;
}

const char* Bureaucrat::GradeTooHighException::what()const throw() {return "Grade is too high!";}
const char* Bureaucrat::GradeTooLowException::what()const throw() {return "Grade is too low!";}

std::ostream &operator<<(std::ostream& o, Bureaucrat& bure)
{
   o << bure.getName() << ", bureaucrat grade " << bure.getGrade() << std::endl;
   return o;
}

void Bureaucrat::signForm(AForm &form)const
{
    try
    {
        form.beSigned(*this);
        std::cout << name << " signed " << form.Get_name() << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << name << " couldn't sign " << form.Get_name() << " because " << e.what() << std::endl;
    }
}
void Bureaucrat::executeForm(AForm const &form) const 
{
    try
    {
        form.execute(*this);
        std::cout << name << " executed " << form.Get_name() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << name << " couldn’t execute " << form.Get_name() << " because " << e.what() << std::endl;
    }
    
}