#include <iostream>
#include <sstream>

#include "Intern.h"
#include "Bureaucrat.h"
#include "AForm.h"
#include "ShrubberyCreationForm.h"
#include "PresidentialPardonForm.h"
#include "RobotomyRequestForm.h"

int main() {
    std::cout << "\nCase 1: Signing a form with insufficient grade\n" << std::endl;
    AForm* form1 = NULL;
    try {
        Intern intern;
        form1 = intern.makeForm("ShrubberyCreationForm", "Garden");
        Bureaucrat alice("Alice", 150);
        form1->beSigned(alice);
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    delete form1;

    std::cout << "\nCase 2: Successfully signing and executing a form\n" << std::endl;
    AForm* form2 = NULL;
    try {
        Intern intern;
        form2 = intern.makeForm("PresidentialPardonForm", "Criminal");
        Bureaucrat bob("Bob", 1);
        form2->beSigned(bob);
        bob.executeForm(*form2);
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    delete form2;

    std::cout << "\nCase 3: Attempting to create an invalid form\n" << std::endl;
    AForm* form3 = NULL;
    try {
        Intern intern;
        form3 = intern.makeForm("InvalidForm", "Target");
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    delete form3;

    std::cout << "\nCase 4: Creating and executing RobotomyRequestForm\n" << std::endl;
    AForm* form4 = NULL;
    try {
        Intern intern;
        form4 = intern.makeForm("RobotomyRequestForm", "Bender");
        Bureaucrat charlie("Charlie", 1);
        form4->beSigned(charlie);
        charlie.executeForm(*form4);
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    delete form4;

    std::cout << "\nCase 5: Attempting to execute an unsigned form\n" << std::endl;
    AForm* form5 = NULL;
    try {
        Intern intern;
        form5 = intern.makeForm("ShrubberyCreationForm", "Park");
        Bureaucrat dave("Dave", 1);
        dave.executeForm(*form5);
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    delete form5;

    std::cout << "\nCase 6: Using a low-grade bureaucrat to execute a form\n" << std::endl;
    AForm* form6 = NULL;
    try {
        Intern intern;
        form6 = intern.makeForm("PresidentialPardonForm", "Criminal");
        Bureaucrat frank("Frank", 150);
        form6->beSigned(frank);
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    delete form6;

    std::cout << "\nCase 7: Multiple forms created by the same intern\n" << std::endl;
    AForm* form7 = NULL;
    AForm* form8 = NULL;
    AForm* form9 = NULL;
    try {
        Intern intern;
        form7 = intern.makeForm("ShrubberyCreationForm", "Garden");
        form8 = intern.makeForm("PresidentialPardonForm", "Politician");
        form9 = intern.makeForm("RobotomyRequestForm", "Robot");
        Bureaucrat grace("Grace", 1);
        form7->beSigned(grace);
        form8->beSigned(grace);
        form9->beSigned(grace);
        grace.executeForm(*form7);
        grace.executeForm(*form8);
        grace.executeForm(*form9);
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    delete form7;
    delete form8;
    delete form9;

    std::cout << "\nCase 8: Dynamic form creation and deletion in a loop\n" << std::endl;
    try {
        Intern intern;
        for (int i = 0; i < 5; ++i) {
            std::ostringstream ossForm;
            ossForm << "Garden_" << (i + 1);
            AForm* form10 = intern.makeForm("ShrubberyCreationForm", ossForm.str());
            Bureaucrat signer("Signer", 1);
            form10->beSigned(signer);
            signer.executeForm(*form10);
            delete form10;
        }
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}
