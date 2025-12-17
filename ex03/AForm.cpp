#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm() : name("empty"), sign_grade(150), execute_grade(150), is_signed(false) {}
AForm::AForm(std::string name, int sign_grade, int execute_grade) : name(name), sign_grade(sign_grade), execute_grade(execute_grade), is_signed(false) 
{
    if(sign_grade < 1 ||  execute_grade < 1)
        throw GradeTooHighException();
    else if (sign_grade > 150 || execute_grade > 150)
        throw GradeTooLowException();
}
AForm::AForm(const AForm &Aform) : name(Aform.name), sign_grade(Aform.sign_grade), execute_grade(Aform.execute_grade), is_signed(Aform.is_signed) {}
AForm &AForm::operator=(const AForm &Aform)
{
    this->is_signed = Aform.is_signed;
    return *this;
}

std::string AForm::Get_name() const { return name; }
bool AForm::Get_signed() const { return is_signed; }
int AForm::Get_signGrade() const { return sign_grade; }
int AForm::Get_execGrade() const { return execute_grade; }

const char *AForm::GradeTooHighException::what() const throw() { return "Grade is too high!"; }
const char *AForm::GradeTooLowException::what() const throw() { return "Grade is too low!"; }

void AForm::beSigned(const Bureaucrat &bre)
{
    if (bre.getGrade() <= this->sign_grade)
        is_signed = true;
    else
        throw AForm::GradeTooLowException();
}

std::ostream &operator<<(std::ostream &os,const AForm &form)
{
    os << "name : " << form.Get_name() << " ,grade required to sign : " << form.Get_signGrade() << " grade required to execute : " << form.Get_execGrade() << " is signed " << (form.Get_signed() ? "yes" : "No");
    return os;
}

AForm::~AForm() {}