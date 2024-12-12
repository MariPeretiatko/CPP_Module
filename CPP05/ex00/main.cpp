#include "Bureaucrat.h"


int main() {
    {
        try {
            Bureaucrat b1("Alice", 2);
            Bureaucrat b3("Paul", 1);
            Bureaucrat b4("Way", 150);
            Bureaucrat b2("Bob", 151);  // GradeTooLowException
//            b1.promote();
            std::cout << b1 << std::endl;
//            std::cout << b1.getName() << " promoted to grade " << b1.getGrade() << std::endl;
        }
        catch (const Bureaucrat::GradeTooHighException& e) {
            std::cerr << RED " Exception caught: " RESET << e.what() << std::endl;
        }
        catch (const Bureaucrat::GradeTooLowException& e) {
            std::cerr << RED " Exception caught: " RESET << e.what() << std::endl;
        }
        catch (const std::exception& e) {
            std::cerr << RED "Exception caught: " RESET << e.what() << std::endl;
        }
    }
    std::cout << "_______________________________________" << std::endl;
    {
        try {
            Bureaucrat b1("Bob", 2);
            b1.promote();
            std::cout << b1 << std::endl;
            b1.promote();
            std::cout << b1 << std::endl;
        }
        catch (const Bureaucrat::GradeTooHighException& e) {
            std::cerr << RED "Exception caught: " RESET << e.what() << std::endl;
        }
        catch (const Bureaucrat::GradeTooLowException& e) {
            std::cerr << RED "Exception caught: " RESET << e.what() << std::endl;
        }
        catch (const std::exception& e) {
            std::cerr << RED "Exception caught: " RESET << e.what() << std::endl;
        }
    }
    std::cout << "_______________________________________" << std::endl;
    {
        try {
            Bureaucrat b1("Cooper", 149);
            b1.demote();
            std::cout << b1 << std::endl;
            b1.demote();
            std::cout << b1 << std::endl;
        }
        catch (const Bureaucrat::GradeTooHighException& e) {
            std::cerr << RED "Exception caught: " RESET << e.what() << std::endl;
        }
        catch (const Bureaucrat::GradeTooLowException& e) {
            std::cerr << RED "Exception caught: " RESET << e.what() << std::endl;
        }
        catch (const std::exception& e) {
            std::cerr << RED "Exception caught: " RESET << e.what() << std::endl;
        }
    }

    std::cout << "_______________________________________" << std::endl;
    {
        try {
            Bureaucrat a;
            Bureaucrat b1("Cooper", 149);
            Bureaucrat a1(b1);
            std::cout << " a - " << a << std::endl;
            std::cout << " b1 - " << b1 << std::endl;
//            b1.demote();
            std::cout <<  " a1(copy b1) - " << a1 << std::endl;
        }
        catch (const Bureaucrat::GradeTooHighException& e) {
            std::cerr << RED "Exception caught: " RESET << e.what() << std::endl;
        }
        catch (const Bureaucrat::GradeTooLowException& e) {
            std::cerr << RED "Exception caught: " RESET << e.what() << std::endl;
        }
        catch (const std::exception& e) {
            std::cerr << RED "Exception caught: " RESET << e.what() << std::endl;
        }
    }


    return 0;
}