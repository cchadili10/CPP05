#include "AForm.hpp"

AForm::AForm(): name("empty"), grade(150), grade_req(150), is_signed(false){};
AForm::AForm(std::string name, int grade, int grade_req):name(name),grade(grade), grade_req(grade_req){}
AForm::AForm(const AForm &Aform) : name(Aform.name), grade(Aform.grade), grade_req(Aform.grade_req){}
AForm &AForm::operator = (const AForm &Aform)
{
    this->is_signed = Aform.is_signed;
    return *this;
}

std::string AForm::Get_name()const{return name;}
bool AForm::Get_signed()const{return is_signed;}
int AForm::Get_grade()const{return grade;}
int AForm::Get_gradeReq()const{return grade_req;}

const char* AForm::GradeTooHighException::what()const throw() {return "Grade is too high!";}
const char* AForm::GradeTooLowException::what()const throw() {return "Grade is too low!";}
const char* AForm::GradeIsSignedException::what() const throw() {return "form is not signed";}
void AForm::beSigned(const Bureaucrat &bre)
{
    if(bre.getGrade() <= this->grade)
    {
        bre.signForm(true, name);
        is_signed = true;
    }
    else
    {
        bre.signForm(false, name);
        throw AForm::GradeTooLowException();
    }
}
void AForm::execute(Bureaucrat const &executor) const
{
    if(!is_signed)
        throw AForm::GradeIsSignedException();
    else if(executor.getGrade() > grade_req)
        throw AForm::GradeTooLowException();
    action();
}


AForm::~AForm(){}