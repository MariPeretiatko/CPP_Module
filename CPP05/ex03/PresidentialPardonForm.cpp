//
// Created by mperetia on 27.06.24.
//

#include "PresidentialPardonForm.h"


PresidentialPardonForm::PresidentialPardonForm()
    : AForm("PresidentialPardonForm", 25, 5), _target("unknown_target"){
    std::cout << GREEN "PresidentialPardonForm " RESET <<  CYAN << _target
            << RESET GREEN "Default Constructor Called" RESET << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target)
    : AForm("PresidentialPardonForm", 25, 5), _target(target){
    std::cout << GREEN "PresidentialPardonForm " RESET CYAN << _target
            << RESET GREEN " Constructor Called" RESET << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& obj)
: AForm(obj), _target(obj._target){
    std::cout << YELLOW "PresidentialPardonForm Copy constructor called" RESET << std::endl;\
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm& obj){
  if(this != &obj)
    _target = obj._target;

  return *this;
}

PresidentialPardonForm::~PresidentialPardonForm(){
    std::cout << RED "Destructor called PresidentialPardonForm " RESET << std::endl;

}

bool PresidentialPardonForm::perform() const{
  std::cout << GREEN << _target << "has been pardoned by Zaphod Beeblebrox." << RESET << std::endl;
  return true;
}