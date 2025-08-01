#ifndef BRREAUCRAT_HPP
#define BRREAUCRAT_HPP

#include <string>
#include <iostream>

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
        int getGrade();
        void incrementGrade();
        void decrementGrade();
        
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
std::ostream& operator<<(std::ostream& o, Bureaucrat& bure);
#endif