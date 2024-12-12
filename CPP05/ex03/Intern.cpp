//
// Created by mperetia on 30.11.24.
//

#include "Intern.h"

Intern::Intern() {
  std::cout << GREEN "Intern " << GREEN << "Default Constructor Called" RESET << std::endl;
}

Intern::Intern(const Intern &obj) {
  std::cout << YELLOW "Intern Copy constructor called" RESET << std::endl;
  (void) obj;
}

Intern &Intern::operator=(const Intern &obj) {
  (void) obj;
  return (*this);
}

Intern::~Intern() {
  std::cout << RED << "Intern " << GREEN << "Destructor Called" << RESET << std::endl;
}

FormType getFormType(const std::string& nameForm) {
    if (nameForm == "ShrubberyCreationForm")
      return SHRUBBERY_CREATION;
    if (nameForm == "PresidentialPardonForm")
      return PRESIDENTIAL_PARDON;
    if (nameForm == "RobotomyRequestForm")
      return ROBOTOMY_REQUEST;
    return UNKNOWN_FORM;
}

AForm *Intern::makeForm(const std::string nameForm, const std::string target) {
  FormType formType = getFormType(nameForm);

    switch (formType) {
        case SHRUBBERY_CREATION:
            std::cout << "Intern created form " << nameForm << std::endl;
            return new ShrubberyCreationForm(target);
        case PRESIDENTIAL_PARDON:
            std::cout << "Intern created form " << nameForm << std::endl;
            return new PresidentialPardonForm(target);
        case ROBOTOMY_REQUEST:
            std::cout << "Intern created form " << nameForm << std::endl;
            return new RobotomyRequestForm(target);
        default:
            throw FormCreateException();
    }
}

const char *Intern::FormCreateException::what() const throw() {
  return "Problem creating form";
}