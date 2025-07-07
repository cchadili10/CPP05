#ifndef AFORM_HPP
#define AFORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
    private:
        const std::string name;
        const int grade;
        const int grade_req;
        bool is_signed;
    public:
        AForm();
        AForm(const AForm &afrom);
        AForm(std::string name, int grade, int grade_req);
        AForm &operator = (const AForm &aform);
        virtual ~AForm();
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
        class GradeIsSignedException : public std::exception
        {
            public:
                const char* what() const throw();
        };
        virtual void execute(Bureaucrat const & executor) const ;
        virtual void action() const = 0 ;

};
std::ostream& operator<<(std::ostream& o, AForm& Aform);

#endif