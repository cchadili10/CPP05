#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Form
{
    private:
        const std::string name;
        bool is_signed;
        const int grade;
        const int grade_req;
    public:
        Form();
        Form(const Form &from);
        Form &operator = (const Form &form);
        ~Form();
        std::string Get_name()const;
        bool Get_signed() const;
        int Get_grade() const;
        int Get_gradeReq() const;
        void beSigned(const Bureaucrat &bre);
        class GradeTooHighException : public std::exception
        {
            public:
             const char* what() const throw();
        };
        class GradeTooLowException : public std::exception
        {
            public:
             const char* what() const throw();
        };
};
std::ostream& operator<<(std::ostream& o, Form& form);

#endif