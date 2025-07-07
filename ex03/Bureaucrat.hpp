#ifndef BRREAUCRAT_HPP
#define BRREAUCRAT_HPP

#include <string>
#include <iostream>
#include "AForm.hpp"

class AForm; 

class Bureaucrat
{
    private:
        std::string name;
        int grade;
    public:
        Bureaucrat();
        Bureaucrat(std::string name, int grade);
        Bureaucrat(const Bureaucrat &Bure);
        Bureaucrat &operator = (const Bureaucrat &Bure);
        ~Bureaucrat();
        std::string getName();
        int getGrade() const;
        void incrementGrade();
        void decrementGrade();
        void signForm(bool check,std::string name_f)const;
        
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
        void executeForm(AForm const & form) const;

};
std::ostream& operator<<(std::ostream& o, Bureaucrat& bure);
#endif