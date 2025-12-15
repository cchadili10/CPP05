#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form() : name("none"), sign_grade(150), execute_grade(150), is_signed(false) {};
Form::Form(std::string name ,int sin, int exec) : name(name), sign_grade(sin), execute_grade(exec), is_signed(false) 
{
    if(sign_grade < 1 || execute_grade < 1)
        throw GradeTooHighException();
    else if (sign_grade > 150 || execute_grade > 150)
        throw GradeTooLowException();
}
Form::Form(const Form &form) : name(form.name), sign_grade(form.sign_grade), execute_grade(form.execute_grade), is_signed(form.is_signed){}
Form &Form::operator = (const Form &form)
{
    this->is_signed = form.is_signed;
    return *this;
}

std::string Form::Get_name()const{return name;}
bool Form::Get_signed()const{return is_signed;}
int Form::Get_signGrade()const{return sign_grade;}
int Form::Get_execGrade()const{return execute_grade;}

const char* Form::GradeTooHighException::what()const throw() {return "Grade is too high!";}
const char* Form::GradeTooLowException::what()const throw() {return "Grade is too low!";}

void Form::beSigned(const Bureaucrat &bre)
{
    if(bre.getGrade() <= this->sign_grade)
        is_signed = true;
    else
        throw Form::GradeTooLowException();
}
std::ostream& operator<<(std::ostream& os, Form& form)
{
    os << "name : " << form.Get_name() << " ,grade required to sign : " << form.Get_signGrade() << " grade required to execute : " << form.Get_execGrade() << " is signed " << (form.Get_signed() ? "yes" : "No");
    return os;
}

Form::~Form(){}