#include "Bureaucrat.hpp"


Bureaucrat::Bureaucrat():name(""), grade(140){}
Bureaucrat::Bureaucrat(const Bureaucrat &bure): name(bure.name), grade(bure.grade){}
Bureaucrat::Bureaucrat(std::string name, int grade):name(name)
{
    if(grade < 1)
        throw Bureaucrat::GradeTooHighException();
    if(grade > 150)
        throw Bureaucrat::GradeTooLowException();
    this->grade = grade;
}
Bureaucrat &Bureaucrat::operator=(const Bureaucrat &bure)
{
    if(this == &bure)
        return *this;
    this->grade = bure.grade;
    return *this;
}

std::string Bureaucrat::getName()const {return name;}
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

std::ostream &operator<<(std::ostream& os,const Bureaucrat& bure)
{
    os << bure.getName() << ", bureaucrat grade " << bure.getGrade() << std::endl;
    return os;
}
Bureaucrat::~Bureaucrat(){}