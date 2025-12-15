#include "Bureaucrat.hpp"
// #include "Form.hpp"

int main() {
    try {
        Bureaucrat b1("ali", 50);
        Form f1("form",100, 50);

        // f1.beSigned(b1);
        b1.signForm(f1);
        std::cout << b1 << std::endl;
        std::cout << f1 << std::endl;
    } catch (std::exception& e) {

        std::cout << e.what() << std::endl;
    }
    try
    {
        Bureaucrat b1("ali", 130);
        Form f1("form", 100, 50);

        // f1.beSigned(b1);
        b1.signForm(f1);
        std::cout << b1 << std::endl;
        std::cout << f1 << std::endl;
    }
    catch (std::exception &e)
    {

        std::cout << e.what() << std::endl;
    }

    return 0;
}