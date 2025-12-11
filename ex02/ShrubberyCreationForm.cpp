#include "ShrubberyCreationForm.hpp"
#include <fstream>


ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("Shrubbery", 145, 137, false), target(target){}

std::string ShrubberyCreationForm::get_target()const {return target;}

void ShrubberyCreationForm::action() const
{

    
    std::ofstream file(get_target().append("_shrubbery").c_str());
    if (!file.is_open())
    {
        std::cerr << "Cannot open file for writing" << std::endl;
        return ;
    }
    file << "      /\\      \n";
    file << "     /**\\     \n";
    file << "    /****\\    \n";
    file << "   /******\\   \n";
    file << "       ||     \n";
    file.close();
    
}
ShrubberyCreationForm::~ShrubberyCreationForm(){}