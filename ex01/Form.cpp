#include "Form.hpp"

Form::Form(): name("empty"), grade(150), grade_req(150), is_signed(false){};
Form::Form(const Form &form) : name(form.name), grade(form.grade), grade_req(form.grade_req){}
Form &Form::operator = (const Form &form)
{
    this->is_signed = form.is_signed;
    return *this;
}

std::string Form::Get_name()const{return name;}
bool Form::Get_signed()const{return is_signed;}
int Form::Get_grade()const{return grade;}
int Form::Get_gradeReq()const{return grade_req;}

const char* Bureaucrat::GradeTooHighException::what()const throw() {return "Grade is too high!";}
const char* Bureaucrat::GradeTooLowException::what()const throw() {return "Grade is too low!";}
void Form::beSigned(const Bureaucrat &bre)
{
    if(bre.getGrade() <= this->grade)
    {
        bre.signForm(true, name);
        is_signed = true;
    }
    else
    {
        bre.signForm(false, name);
        throw Form::GradeTooLowException();
    }
}


Form::~Form(){}