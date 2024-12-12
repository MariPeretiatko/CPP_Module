#include <iostream>
#include <sstream>
#include "Bureaucrat.h"
#include "ShrubberyCreationForm.h"
#include "RobotomyRequestForm.h"
#include "PresidentialPardonForm.h"

int main() {
    std::cout << "\nCase 1: Signing a form with insufficient grade\n" << std::endl;
    {
        Bureaucrat john("John", 50);
        AForm* form = new ShrubberyCreationForm("Garden");

        std::cout << *form << std::endl;
        try {
            john.signForm(*form);
            std::cout << *form << std::endl;

            john.executeForm(*form);
        } catch (const std::exception& e) {
            std::cerr << "Error: " << e.what() << std::endl;
        }

        delete form;
    }

    std::cout << "\nCase 2: Signing a form with insufficient grade\n" << std::endl;
    {
      Bureaucrat john("John", 150); // Минимальный ранг

        Bureaucrat john("John", 150); // Минимальный ранг
        AForm* form = new ShrubberyCreationForm("Park");

        std::cout << *form << std::endl;
        try {
            john.signForm(*form);
            std::cout << *form << std::endl;
        } catch (const std::exception& e) {
            std::cerr << "Error: " << e.what() << std::endl;
        }

        delete form;
    }

    std::cout << "\nCase 3: Executing an unsigned form\n" << std::endl;
    {
        Bureaucrat john("John", 50);
        AForm* form = new ShrubberyCreationForm("Park");

        std::cout << *form << std::endl;
        try {
            john.executeForm(*form);
        } catch (const std::exception& e) {
            std::cerr << "Error: " << e.what() << std::endl;
        }

        delete form;
    }

    std::cout << "\nCase 4: Executing a form with insufficient grade\n" << std::endl;
    {
        Bureaucrat john("John", 150);
        AForm* form = new ShrubberyCreationForm("Garden");

        try {
            john.signForm(*form);
            john.executeForm(*form);
        } catch (const std::exception& e) {
            std::cerr << "Error: " << e.what() << std::endl;
        }

        delete form;
    }

    std::cout << "\nCase 5: Signing and executing a PresidentialPardonForm\n" << std::endl;
    {
        Bureaucrat president("President", 1);
        AForm* form = new PresidentialPardonForm("Alice");

        std::cout << *form << std::endl;
        try {
            president.signForm(*form);
            std::cout << *form << std::endl;

            president.executeForm(*form);
        } catch (const std::exception& e) {
            std::cerr << "Error: " << e.what() << std::endl;
        }

        delete form;
    }

    std::cout << "\nCase 6: RobotomyRequestForm success and failure\n" << std::endl;
    {
        Bureaucrat technician("Technician", 45);
        AForm* form = new RobotomyRequestForm("Robot");

        try {
            technician.signForm(*form);
            std::cout << *form << std::endl;

            technician.executeForm(*form);
            technician.executeForm(*form);
        } catch (const std::exception& e) {
            std::cerr << "Error: " << e.what() << std::endl;
        }

        delete form;
    }

    std::cout << "\nCase 7: Copy and assignment\n" << std::endl;
    {
        ShrubberyCreationForm original("OriginalGarden");
        AForm* copy = new ShrubberyCreationForm(original);

        std::cout << "Original: " << original << std::endl;
        std::cout << "Copy: " << *copy << std::endl;

        Bureaucrat john("John", 50);
        john.signForm(original);
        john.signForm(*copy);

        delete copy;
    }

    std::cout << "\nCase 8: Boundary values for grades\n" << std::endl;
    {
        try {
            Bureaucrat max("Max", 1);
            Bureaucrat min("Min", 150);

            AForm* form = new ShrubberyCreationForm("Garden");
            max.signForm(*form);
            min.executeForm(*form);

            delete form;
        } catch (const std::exception& e) {
            std::cerr << "Error: " << e.what() << std::endl;
        }
    }

    std::cout << "\nCase 9: Bureaucrat created dynamically signs and executes a form\n" << std::endl;
    {
        Bureaucrat* john = new Bureaucrat("John", 50);
        AForm* form = new ShrubberyCreationForm("Forest");

        std::cout << *form << std::endl;
        try {
            john->signForm(*form);
            std::cout << *form << std::endl;

            john->executeForm(*form);
        } catch (const std::exception& e) {
            std::cerr << "Error: " << e.what() << std::endl;
        }

        delete form;
        delete john;
    }

    std::cout << "\nCase 10: Testing Bureaucrat and Forms with dynamic allocation\n" << std::endl;

      	for (int i = 10; i < 15; ++i) {
        std::ostringstream ossBureaucrat, ossForm;
        ossBureaucrat << "Bureaucrat_" << (i + 1);
        ossForm << "Garden_" << (i + 1);

        std::string bureaucratName = ossBureaucrat.str();
        std::string formName = ossForm.str();

        Bureaucrat* tempBureaucrat = new Bureaucrat(bureaucratName, 1 + (i * 10));
        AForm* tempForm = new ShrubberyCreationForm(formName);

        try {
            tempBureaucrat->signForm(*tempForm);
            tempBureaucrat->executeForm(*tempForm);
        } catch (const std::exception& e) {
            std::cerr << "Error: " << e.what() << std::endl;
        }

        delete tempForm;
        delete tempBureaucrat;
        std::cout << std::endl;
    	}
	std::cout << "\nCase 11: Testing RobotomyRequestForm with dynamic allocation and 50% success rate\n" << std::endl;

	for (int i = 0; i < 5; ++i) {
    std::ostringstream ossBureaucrat, ossForm;
    ossBureaucrat << "Bureaucrat_" << (i + 10);
    ossForm << "Robot_" << (i + 1);

    std::string bureaucratName = ossBureaucrat.str();
    std::string formName = ossForm.str();

    Bureaucrat* tempBureaucrat = new Bureaucrat(bureaucratName, 70 - (i * 5));
    AForm* tempForm = new RobotomyRequestForm(formName);

    try {
        tempBureaucrat->signForm(*tempForm);
        // Пытаемся выполнить форму несколько раз, чтобы проверить вероятность успеха
        for (int attempt = 0; attempt < 3; ++attempt) {
            std::cout << "\nAttempt " << (attempt + 1) << " for " << formName << std::endl;
            tempBureaucrat->executeForm(*tempForm);
        }
    	} catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    delete tempForm;
    delete tempBureaucrat;
}


    return 0;
}
