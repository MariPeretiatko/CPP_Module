//#include <iostream>
#include "Bureaucrat.h"
#include "Form.h"


int main() {
    std::cout << "_______________________________________" << std::endl;
    std::cout << "Case 1" << std::endl;
    {
        try {
            Form f1("Form1", 1, 100);
            Form f2("Form2", 150, 100);
        }
        catch (const Form::GradeTooHighException& e) {
            std::cerr << RED "Exception caught: " RESET << e.what() << std::endl;
        }
        catch (const Form::GradeTooLowException& e) {
            std::cerr << RED "Exception caught: " RESET << e.what() << std::endl;
        }
        catch (const std::exception& e) {
            std::cerr << RED "Exception caught: " RESET << e.what() << std::endl;
        }
    }

    std::cout << "_______________________________________" << std::endl;
    std::cout << "Case 2" << std::endl;
    {
        try {
            Form f3("Form3", 151, 100);
        }
        catch (const Form::GradeTooHighException& e) {
            std::cerr << RED "Exception caught: " RESET << e.what() << std::endl;
        }
        catch (const Form::GradeTooLowException& e) {
            std::cerr << RED "Exception caught: " RESET << e.what() << std::endl;
        }
        catch (const std::exception& e) {
            std::cerr << RED "Exception caught: " RESET << e.what() << std::endl;
        }
    }

    std::cout << "_______________________________________" << std::endl;
    std::cout << "Case 3" << std::endl;
    {
        try {
            Form f4("Form4", 0, 100);
        }
        catch (const Form::GradeTooHighException& e) {
            std::cerr << RED "Exception caught: " RESET << e.what() << std::endl;
        }
        catch (const Form::GradeTooLowException& e) {
            std::cerr << RED "Exception caught: " RESET << e.what() << std::endl;
        }
        catch (const std::exception& e) {
            std::cerr << RED "Exception caught: " RESET << e.what() << std::endl;
        }
    }

    std::cout << "_______________________________________" << std::endl;
    std::cout << "Case 4" << std::endl;
    {
        try {
            Form f5("Form5", 1, 150);
        }
        catch (const Form::GradeTooHighException& e) {
            std::cerr << RED "Exception caught: " RESET << e.what() << std::endl;
        }
        catch (const Form::GradeTooLowException& e) {
            std::cerr << RED "Exception caught: " RESET << e.what() << std::endl;
        }
        catch (const std::exception& e) {
            std::cerr << RED "Exception caught: " RESET << e.what() << std::endl;
        }
    }

    std::cout << "_______________________________________" << std::endl;
    std::cout << "Case 5" << std::endl;
    {
        try {
            Form f6("Form6", 1, 0);
        }
        catch (const Form::GradeTooHighException& e) {
            std::cerr << RED "Exception caught: " RESET << e.what() << std::endl;
        }
        catch (const Form::GradeTooLowException& e) {
            std::cerr << RED "Exception caught: " RESET << e.what() << std::endl;
        }
        catch (const std::exception& e) {
            std::cerr << RED "Exception caught: " RESET << e.what() << std::endl;
        }
    }

    std::cout << "_______________________________________" << std::endl;
    std::cout << "Case 6" << std::endl;
    {
        try {
            Form f7("Form7", 1, 151);
        }
        catch (const Form::GradeTooHighException& e) {
            std::cerr << RED "Exception caught: " RESET << e.what() << std::endl;
        }
        catch (const Form::GradeTooLowException& e) {
            std::cerr << RED "Exception caught: " RESET << e.what() << std::endl;
        }
        catch (const std::exception& e) {
            std::cerr << RED "Exception caught: " RESET << e.what() << std::endl;
        }
    }

    std::cout << "_______________________________________" << std::endl;
    std::cout << "Case 7" << std::endl;
    {
        try {
            Form f1("FormA", 50, 100);
            Bureaucrat b1("John", 155);
        }
        catch (const Bureaucrat::GradeTooHighException& e) {
            std::cerr << RED "Bureaucrat exception: " RESET << e.what() << std::endl;
        }
        catch (const Bureaucrat::GradeTooLowException& e) {
            std::cerr << RED "Bureaucrat exception: " RESET << e.what() << std::endl;
        }
        catch (const Form::GradeTooHighException& e) {
            std::cerr << RED "Form exception: " RESET << e.what() << std::endl;
        }
        catch (const Form::GradeTooLowException& e) {
            std::cerr << RED "Form exception: " RESET << e.what() << std::endl;
        }
        catch (const std::exception& e) {
            std::cerr << RED "General exception: " RESET << e.what() << std::endl;
        }
    }

    std::cout << "_______________________________________" << std::endl;
    std::cout << "Case 8" << std::endl;
    {
        try {
            Form f1("FormA", 50, 100);
            Bureaucrat b1("John", 50);
            b1.signForm(f1);
            std::cout << f1 << std::endl;
        }
        catch (const Bureaucrat::GradeTooHighException& e) {
            std::cerr << RED "Bureaucrat exception: " RESET << e.what() << std::endl;
        }
        catch (const Bureaucrat::GradeTooLowException& e) {
            std::cerr << RED "Bureaucrat exception: " RESET << e.what() << std::endl;
        }
        catch (const Form::GradeTooHighException& e) {
            std::cerr << RED "Form exception: " RESET << e.what() << std::endl;
        }
        catch (const Form::GradeTooLowException& e) {
            std::cerr << RED "Form exception: " RESET << e.what() << std::endl;
        }
        catch (const std::exception& e) {
            std::cerr << RED "General exception: " RESET << e.what() << std::endl;
        }
    }

    std::cout << "_______________________________________" << std::endl;
    std::cout << "Case 9" << std::endl;
    {
        try {
            Form f1("FormA", 50, 100);
            Bureaucrat b1("John", 51);
            b1.signForm(f1);  // Это вызовет исключение GradeTooLowException
            std::cout << f1 << std::endl;
        }
        catch (const Bureaucrat::GradeTooHighException& e) {
            std::cerr << RED "Bureaucrat exception: " RESET << e.what() << std::endl;
        }
        catch (const Bureaucrat::GradeTooLowException& e) {
            std::cerr << RED "Bureaucrat exception: " RESET << e.what() << std::endl;
        }
        catch (const Form::GradeTooHighException& e) {
            std::cerr << RED "Form exception: " RESET << e.what() << std::endl;
        }
        catch (const Form::GradeTooLowException& e) {
            std::cerr << RED "Form exception: " RESET << e.what() << std::endl;
        }
        catch (const std::exception& e) {
            std::cerr << RED "General exception: " RESET << e.what() << std::endl;
        }
    }

    std::cout << "_______________________________________" << std::endl;
    std::cout << "Case 10" << std::endl;
    {
        try {
            Form f1("FormA", 50, 100);
            Bureaucrat b1("John", 49);
            b1.signForm(f1);  // succses Это должно успешно подписать форму
            std::cout << f1 << std::endl;
        }
        catch (const Form::GradeTooHighException& e) {
            std::cerr << RED "Exception caught: " RESET << e.what() << std::endl;
        }
        catch (const Form::GradeTooLowException& e) {
            std::cerr << RED "Exception caught: " RESET << e.what() << std::endl;
        }
        catch (const std::exception& e) {
            std::cerr << RED "Exception caught: " RESET << e.what() << std::endl;
        }
    }

    std::cout << "_______________________________________" << std::endl;
    std::cout << "Case 11" << std::endl;
    {
        try {
            Bureaucrat b1("John", 150);
            Form f1("FormA", 50, 100);
            b1.signForm(f1);  // Это вызовет исключение GradeTooLowException
            std::cout << f1 << std::endl;
        }
        catch (const Bureaucrat::GradeTooHighException& e) {
            std::cerr << RED "Bureaucrat exception: " RESET << e.what() << std::endl;
        }
        catch (const Bureaucrat::GradeTooLowException& e) {
            std::cerr << RED "Bureaucrat exception: " RESET << e.what() << std::endl;
        }
        catch (const Form::GradeTooHighException& e) {
            std::cerr << RED "Form exception: " RESET << e.what() << std::endl;
        }
        catch (const Form::GradeTooLowException& e) {
            std::cerr << RED "Form exception: " RESET << e.what() << std::endl;
        }
        catch (const std::exception& e) {
            std::cerr << RED "General exception: " RESET << e.what() << std::endl;
        }
    }

    std::cout << "_______________________________________" << std::endl;
    std::cout << "Case 12" << std::endl;
    {
        try {
            Bureaucrat b1("John", 10);
            Bureaucrat b2("Alice", 150);

            Form f1("FormA", 10, 150);
            b1.signForm(f1);  // Это должно успешно подписать форму
            b2.signForm(f1);  // Это должно успешно подписать форму

            std::cout << f1 << std::endl;
        }
        catch (const Bureaucrat::GradeTooHighException& e) {
            std::cerr << RED "Bureaucrat exception: " RESET << e.what() << std::endl;
        }
        catch (const Bureaucrat::GradeTooLowException& e) {
            std::cerr << RED "Bureaucrat exception: " RESET << e.what() << std::endl;
        }
        catch (const Form::GradeTooHighException& e) {
            std::cerr << RED "Form exception: " RESET << e.what() << std::endl;
        }
        catch (const Form::GradeTooLowException& e) {
            std::cerr << RED "Form exception: " RESET << e.what() << std::endl;
        }
        catch (const std::exception& e) {
            std::cerr << RED "General exception: " RESET << e.what() << std::endl;
        }
    }

    return 0;
}

