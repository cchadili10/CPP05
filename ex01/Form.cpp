#include "Form.hpp"

Form::Form(): name("empty"), sign_grade(150), execute_grade(150), is_signed(false){};
Form::Form(const Form &form) : name(form.name), sign_grade(form.sign_grade), execute_grade(form.execute_grade){}
Form &Form::operator = (const Form &form)
{
    this->is_signed = form.is_signed;
    return *this;
}

std::string Form::Get_name()const{return name;}
bool Form::Get_signed()const{return is_signed;}
int Form::Get_signGrade()const{return sign_grade;}
int Form::Get_execGrade()const{return execute_grade;}

const char* Bureaucrat::GradeTooHighException::what()const throw() {return "Grade is too high!";}
const char* Bureaucrat::GradeTooLowException::what()const throw() {return "Grade is too low!";}

void Form::beSigned(const Bureaucrat &bre)
{
    if(bre.getGrade() <= this->sign_grade)
        is_signed = true;
    else
        throw Form::GradeTooLowException();
}
std::ostream& operator<<(std::ostream& o, Form& form)
{
    o << "name : " << form.Get_name() << " ,grade required to sign : " << form.Get_signGrade() << " grade required to execute : " << form.Get_execGrade();
}

Form::~Form(){}