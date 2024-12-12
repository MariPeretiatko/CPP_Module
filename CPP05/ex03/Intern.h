//
// Created by mperetia on 30.11.24.
//

#ifndef INTERN_H
#define INTERN_H

#include <iostream>
#include "AForm.h"
#include "RobotomyRequestForm.h"
#include "PresidentialPardonForm.h"
#include "ShrubberyCreationForm.h"

enum FormType {
    SHRUBBERY_CREATION,
    PRESIDENTIAL_PARDON,
    ROBOTOMY_REQUEST,
    UNKNOWN_FORM
};

class Intern {
public:
  class FormCreateException : public std::exception {
    public:
        virtual const char* what() const throw();
  };

  Intern();
  Intern(const Intern &other);
  Intern &operator=(const Intern &other);
  ~Intern();
  AForm *makeForm(std::string nameForm, std::string target);


};



#endif //INTERN_H
