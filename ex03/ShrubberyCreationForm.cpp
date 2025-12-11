#include "ShrubberyCreationForm.hpp"
#include <fstream>


ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("shrubbery", 145, 137){}
ShrubberyCreationForm::~ShrubberyCreationForm(){}
void ShrubberyCreationForm::action() const 
{
    std::ofstream file(Get_name().append("_shrubbery").c_str());
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